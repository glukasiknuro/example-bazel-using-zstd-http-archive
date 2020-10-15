load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
  name = "zstd-header",
  hdrs = glob(["lib/zstd.h"]),
  includes = ["lib"],
  include_prefix = "fake-prefix-to-assure-external-used",
  visibility = ["//visibility:public"],
)
