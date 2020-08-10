load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# http_archive(
#     name = "rules_cc",
#     sha256 = "b87996d308549fc3933f57a786004ef65b44b83fd63f1b0303a4bbc3fd26bbaf",
#     strip_prefix = "rules_cc-1477dbab59b401daa94acedbeaefe79bf9112167",
#     urls = ["https://github.com/bazelbuild/rules_cc/archive/1477dbab59b401daa94acedbeaefe79bf9112167.tar.gz"],
# )

http_archive(
    name = "com_google_googletest",
    sha256 = "66f4362996da6750d1126fc4cff8ebae65ccc07054f5050453f43dd704f5bfcb",
    strip_prefix = "googletest-68ca04c261ded1b936ef5c121618247f7010d445",
    urls = ["https://github.com/google/googletest/archive/68ca04c261ded1b936ef5c121618247f7010d445.tar.gz"],
)

git_repository(
    name = "com_github_nelhage_rules_boost",
    branch = "master",
    remote = "https://github.com/nelhage/rules_boost",
)

load("@com_github_nelhage_rules_boost//:boost/boost.bzl", "boost_deps")

boost_deps()

git_repository(
    name = "com_google_fruit",
    branch = "master",
    remote = "https://github.com/google/fruit",
    strip_prefix = "extras/bazel_root",
)
