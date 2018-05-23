cc_library(
    name = "SDL_Core",
    include_prefix = "ecs/game",
    hdrs = glob(["**/*.h"]),
    srcs = glob(["**/*.h"]) + glob(["**/*.cpp"]),
    visibility = ["//visibility:public"],
    deps = [
        "@sdl2//:SDL2",
        "//source/core:ecs_core",
    ],
)
