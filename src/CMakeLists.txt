add_executable(a.out
  main.c
  sample1.c
  sample2.c
  sample3.c
  sample4.c
  sample5.c
  sample6.c
  sample7.c
)

target_include_directories(a.out
  PUBLIC ${PROJECT_SOURCE_DIR}/include
)
