
project(VendingMachine)

set(HEADER_FILES
        Vending.h
        )
set(SOURCE_FILES
        Vending.cpp
        )

add_library(VendingMachine_lib STATIC ${SOURCE_FILES} ${HEADER_FILES} Coin.cpp Coin.h Coin.cpp Coin.h)