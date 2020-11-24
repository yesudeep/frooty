#include "absl/container/flat_hash_map.h"
#include "gtest/gtest.h"

#include <tuple>

namespace frooty {

TEST(FlatHashMapTest, AccessKeys) {
  absl::flat_hash_map<int, int> map;
  map[4] = 400;
  map[3] = 400;
  map[1] = 500;
  map.insert(std::make_pair(10, 100));
  map[7] = 700;

  std::vector<int> keys;
  for (auto it = map.begin(); it != map.end(); ++it) {
    keys.push_back(it->first);
  }
  EXPECT_EQ(5, keys.size());
}

TEST(FlatHashMapTest, HasSize) {
  absl::flat_hash_map<int, int> map;
  map[4] = 400;
  map[3] = 400;
  map[1] = 500;
  map.insert(std::make_pair(10, 100));
  map[7] = 700;

  EXPECT_EQ(map.size(), 5);
}

} // namespace frooty
