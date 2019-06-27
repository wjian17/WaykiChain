// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2017-2019 The WaykiChain Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef PERSIST_CACHEWRAPPER_H
#define PERSIST_CACHEWRAPPER_H

#include "accountdb.h"
#include "cdpdb.h"
#include "contractdb.h"
#include "delegatedb.h"
#include "dexdb.h"
#include "pricefeeddb.h"
#include "txdb.h"

class CCacheWrapper {
public:
    CAccountCache accountCache;
    CContractCache contractCache;
    CDelegateCache delegateCache;
    CTxMemCache txCache;
    CPricePointMemCache ppCache;
    CCdpCacheManager cdpCache;
    CDexCache dexCache;
    CTxUndo txUndo;
};

#endif //PERSIST_CACHEWRAPPER_H