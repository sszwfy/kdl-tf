cmake_minimum_required(VERSION 2.8.0)
aux_source_directory(./ M_SRC)
include_directories(./)
add_executable(m_test ${M_SRC})