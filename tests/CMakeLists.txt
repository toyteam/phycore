SET(LIB_NAME tests)
SET(LIB_OUTNAME phycore-${LIB_NAME})

INCLUDE_DIRECTORIES(${PHYCORE_PATH_INCLUDE})

LINK_DIRECTORIES(${PHYCORE_LIBRARY_OUTPUT_PATH})

SET(SOURCE_PATH ${PHYCORE_PATH_TESTS})

SET(TESTS_SOURCES
)
SOURCE_GROUP(${LIB_NAME} FILES ${TESTS_SOURCES})

#ADD_EXECUTABLE(${LIB_OUTNAME} ${TESTS_SOURCES})

# Copy test environment.
# file(COPY ${PHYCORE_PATH_TESTS}/testenv DESTINATION ${CMAKE_BINARY_DIR})
# file(COPY ${PHYCORE_PATH_TESTS}/Reset-TestEnv.ps1 DESTINATION ${CMAKE_BINARY_DIR})

#SET_TARGET_ATTRIBUTE(${LIB_OUTNAME} "tests")
