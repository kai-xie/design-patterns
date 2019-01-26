cc_binary(
  name = "cor",
  srcs = ["main.cc"],
  copts = ["-std=c++14"],
  deps = ["request", "manager"],
)

cc_library(
  name = "request",
  hdrs = ["request.h"],
)

cc_library(
  name = "manager",
  srcs = ["manager.cc"],
  hdrs = ["manager.h"],
  deps = ["request"],
)
