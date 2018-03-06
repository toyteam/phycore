# contrib folders
INCLUDE_DIRECTORIES(${PHYCORE_PATH_DEPENDENCIES}/eigen)

# phycore folder
INCLUDE_DIRECTORIES(${PHYCORE_PATH_INCLUDE})

# lib folder for link
LINK_DIRECTORIES(${PHYCORE_LIBRARY_OUTPUT_PATH})

# runtime libraries
ADD_SUBDIRECTORY(phycore-math)

# framework
ADD_SUBDIRECTORY(phycore)