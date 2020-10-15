load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
  name = "zstd-gzip",
  urls = ["https://github.com/facebook/zstd/releases/download/v1.4.5/zstd-1.4.5.tar.gz"],
  sha256 = "98e91c7c6bf162bf90e4e70fdbc41a8188b9fa8de5ad840c401198014406ce9e",
  build_file = "//:zstd.BUILD",
  strip_prefix = "zstd-1.4.5",
)

http_archive(
  name = "zstd-zstd",
  urls = ["https://github.com/facebook/zstd/releases/download/v1.4.5/zstd-1.4.5.tar.zst"],
  sha256 = "2c2366874bc449ff539614266d8c0d6ecdb4baf30bb65609c239ab4ed23c03c7",
  build_file = "//:zstd.BUILD",
  strip_prefix = "zstd-1.4.5"
)
