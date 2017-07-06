include_directories(c01 util)

set(C01_FILES
    c01/bitXor.c
    )

set(UTIL_FILES
    util/head.h)

add_executable(${PROJECT_NAME}
    ${C01_FILES}
    ${UTIL_FILES}
    main.c)
