cc_binary (
  name = "visitor",
  srcs = ["main.cc"],
  copts = ["-Ivisitor"],
  deps = [":man", ":woman", "visitor_success", "visitor_failed", "person_struc_lib"],
)

cc_library (
  name = "person",
  hdrs = ["person.h"],
  copts = ["-I/usr/include"],
)

cc_library (
  name = "man",
  srcs = ["man.cc"],
  hdrs = ["man.h"],
  deps = ["person", "visitor_base"],
)

cc_library (
  name = "woman",
  srcs = ["woman.cc"],
  hdrs = ["woman.h"],
  deps = ["person", "visitor_base"],
)

cc_library (
  name = "visitor_base",
  hdrs = glob(["visitor_base.h"]),
  copts = ["-I/usr/include"],
)

cc_library (
  name = "visitor_success",
  srcs = glob(["visitor_success.cc"]),
  hdrs = glob(["visitor_success.h"]),
  copts = ["-I/usr/include"],
  deps = [":person", "visitor_base"],
)

cc_library (
  name = "visitor_failed",
  srcs = glob(["visitor_failed.cc"]),
  hdrs = glob(["visitor_failed.h"]),
  copts = ["-I/usr/include"],
  deps = [":person", "visitor_base"],
)

cc_library (
  name = "person_struc_lib",
  srcs = ["person_structure.h"],
  copts = ["-I/usr/include"],
)