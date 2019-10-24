
project(VendingMachine)

set(HEADER_FILES
        Vending.h
        Cashier.h
        )
set(SOURCE_FILES
        Vending.cpp
        Cashier.cpp
        )

add_library(VendingMachine_lib STATIC ${SOURCE_FILES} ${HEADER_FILES} Coin.h)