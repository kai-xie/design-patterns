cc_binary(
  name = "command",
  srcs = ["main.cc"],
  copts = ["-std=c++14"],
  deps = ["cook", "order", "waiter"],
)

cc_library(
  name = "cook",
  srcs = ["cook.h"],
  # hdrs = ["header files"],
  # deps = ["header files"],
)

cc_library(
  name = "order",
  srcs = ["order.h"],
  deps = ["cook"],
)

cc_library(
  name = "waiter",
  srcs = ["waiter.h"],
  # hdrs = ["header files"],
  deps = ["order"],
)
