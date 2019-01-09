cc_binary (
  name = "visitor",
  # srcs = glob(["*.cc"]),
  srcs = ["main.cc"],
  # hdrs = glob(["*.h"]),
  copts = ["-Ivisitor"],
  deps = [":visitor_lib"],
)

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
cc_library(
  name = "visitor_lib",
  srcs = glob(["*.cc"], exclude = ["main.cc"]),
  hdrs = glob(["*.h"]),
  # deps = ["header files"],
  copts = ["-I/usr/include"]
)
