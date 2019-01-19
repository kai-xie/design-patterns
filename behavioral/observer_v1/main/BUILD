cc_binary(
  name = "observer",
  srcs = ["main.cc"],
  copts = ["-std=c++14"],
  deps = ["observer_one", "observer_two", "notifier_one", "notifier_two"],
)

cc_library(
  name = "observer_base",
  # srcs = ["observer_base.h"],
  hdrs = ["observer_base.h"],
  # deps = ["header files"],
)

cc_library(
  name = "notifier_base",
  srcs = ["notifier_base.cc"],
  hdrs = ["notifier_base.h"],
  deps = ["observer_base"],
  copts = ["-I/usr/include"]
)

cc_library(
  name = "observer_one",
  srcs = ["observer_one.cc"],
  hdrs = ["observer_one.h"],
  deps = ["observer_base", "notifier_base"],
  copts = ["-I/usr/include"]
)

cc_library(
  name = "observer_two",
  srcs = ["observer_two.cc"],
  hdrs = ["observer_two.h"],
  deps = ["observer_base", "notifier_base"],
  copts = ["-I/usr/include"]
)

cc_library(
  name = "notifier_one",
  srcs = ["notifier_one.cc"],
  hdrs = ["notifier_one.h", "notifier_base.h"],
  deps = ["notifier_base", "observer_base"],
  copts = ["-I/usr/include"]
)

cc_library(
  name = "notifier_two",
  srcs = ["notifier_two.cc"],
  hdrs = ["notifier_two.h", "notifier_base.h"],
  deps = ["notifier_base", "observer_base"],
  copts = ["-I/usr/include"]
)
