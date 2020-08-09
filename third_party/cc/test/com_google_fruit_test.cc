#include <iostream>
#include <string>

#include "fruit/fruit.h"
#include "gtest/gtest.h"

class Writer {
 public:
  virtual void write(const std::string& s) = 0;
};

class StdoutWriter : public Writer {
 public:
  INJECT(StdoutWriter()) = default;
  void write(const std::string& s) override { std::cout << s; }
};

class Greeter {
 public:
  virtual auto greet() -> std::string = 0;
};

class GreeterImpl : public Greeter {
 private:
  Writer* writer;

 public:
  // Like "GreeterImpl(Writer* writer) : ... {...}" but also marks this
  // constructor as the one to use for injection.
  INJECT(GreeterImpl(Writer* writer)) : writer{writer} {}
  auto greet() -> std::string override {
    std::string str = "Hello, world!";
    writer->write(str);
    return str;
  }
};

fruit::Component<Greeter> getGreeterComponent();

fruit::Component<Greeter> getGreeterComponent() {
  return fruit::createComponent()
      .bind<Writer, StdoutWriter>()
      .bind<Greeter, GreeterImpl>();
}

TEST(GreeterTest, LoadsDependencies) {
  fruit::Injector<Greeter> injector(getGreeterComponent);
  Greeter* greeter = injector.get<Greeter*>();
  EXPECT_EQ("Hello, world!", greeter->greet());
}
