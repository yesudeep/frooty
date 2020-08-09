load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

http_archive(
    name = "rules_cc",
    sha256 = "35f2fb4ea0b3e61ad64a369de284e4fbbdcdba71836a5555abb5e194cf119509",
    strip_prefix = "rules_cc-624b5d59dfb45672d4239422fa1e3de1822ee110",
    urls = ["https://github.com/bazelbuild/rules_cc/archive/624b5d59dfb45672d4239422fa1e3de1822ee110.tar.gz"],
)

http_archive(
    name = "com_google_googletest",
    sha256 = "66f4362996da6750d1126fc4cff8ebae65ccc07054f5050453f43dd704f5bfcb",
    strip_prefix = "googletest-68ca04c261ded1b936ef5c121618247f7010d445",
    urls = ["https://github.com/google/googletest/archive/68ca04c261ded1b936ef5c121618247f7010d445.tar.gz"],
)

http_archive(
    name = "com_github_nelhage_rules_boost",
    sha256 = "8b72c1cde81ad03e328ab8ff2b31ccebd1366eb1ac1c9dbfc584e1e11d50c53f",
    strip_prefix = "rules_boost-1da7517245fb944d6b7b427aa86fd5571663f90a",
    urls = ["https://github.com/nelhage/rules_boost/archive/1da7517245fb944d6b7b427aa86fd5571663f90a.tar.gz"],
)

load("@com_github_nelhage_rules_boost//:boost/boost.bzl", "boost_deps")

boost_deps()

# http_archive(
#     name = "com_google_fruit",
#     sha256 = "1d6e8f667d3210b25939f1fd2141b11b737c129430c8554156a77ab5d8c390ea",
#     strip_prefix = "fruit-94cefefb42f3685c1d64664e6aa9cbaf834b25ee/extras/bazel_root",
#     urls = ["https://github.com/google/fruit/archive/94cefefb42f3685c1d64664e6aa9cbaf834b25ee.tar.gz"],
# )

git_repository(
    name = "com_google_fruit",
    branch = "master",
    remote = "https://github.com/google/fruit",
    strip_prefix = "extras/bazel_root",
)
