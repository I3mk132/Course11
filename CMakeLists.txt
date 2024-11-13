cmake_minimum_required(VERSION 3.28)
project(course11)

set(CMAKE_CXX_STANDARD 17)

add_executable(course11 main.cpp
        Lib/clsUtil.h
        Lib/clsInputValidate.h
        Core/clsPerson.h
        Core/clsBankClient.h
        clsMainScreen.h
        clsScreen.h
        Screens/Client/clsClientListScreen.h
        Screens/Client/clsAddNewClientScreen.h
        Screens/Client/clsDeleteClientScreen.h
        Screens/Client/clsUpdateClientScreen.h
        Screens/Client/clsFindClientScreen.h
        Screens/Transaction/clsTransactionsScreen.h
        Screens/Transaction/clsDepositScreen.h
        Screens/Transaction/clsWithdrawScreen.h
        Screens/Transaction/clsTotalBalancesScreen.h
        Screens/User/clsManageUsersScreen.h
        Core/clsUser.h
        Screens/User/clsUsersListScreen.h
        Screens/User/clsAddNewUserScreen.h
        Screens/User/clsDeleteUserScreen.h
        Screens/User/clsUpdateUserScreen.h
        Screens/User/clsFindUserScreen.h
        Global.h
        Screens/Login/clsLoginScreen.h
        Screens/Login/clsLoginRegisterScreen.h
        Screens/Transaction/clsTransferScreen.h
        Screens/Transaction/clsTransferLogScreen.h
        InterfaceCommunication.h
        Core/clsCurrency.h
        Screens/CurrencyExchange/clsCurrencyExchangeScreen.h
        Screens/CurrencyExchange/clsCurrenciesListScreen.h
        Screens/CurrencyExchange/clsFindCurrencyScreen.h
        Screens/CurrencyExchange/clsUpdateRateScreen.h
        Screens/CurrencyExchange/clsCurrencyCalculatorScreen.h
)
