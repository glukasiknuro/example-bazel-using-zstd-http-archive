load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
    name = "test-gzip",
    srcs = ["zstd_version_test.cc"],
    deps = ["@zstd-gzip//:zstd-header"],
)

cc_test(
    name = "test-zstd",
    srcs = ["zstd_version_test.cc"],
    deps = ["@zstd-zstd//:zstd-header"],
)
