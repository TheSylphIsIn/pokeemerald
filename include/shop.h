#ifndef GUARD_SHOP_H
#define GUARD_SHOP_H

extern EWRAM_DATA struct ItemSlot gMartPurchaseHistory[3];

void CreatePokemartMenu(const u16 *);
void CreateTMShopMenu(const u16 *, u8 shopId);
void CreateDecorationShop1Menu(const u16 *);
void CreateDecorationShop2Menu(const u16 *);
void CB2_ExitSellMenu(void);

#define TMSHOP_COUNT 4
#define TMSHOP_ITEMS_COUNT 16   // If changed to be more than 16, you'll need to change the data type in tmShopFlags from u16 to u32 or u64.

enum ItemBoughtFlags
{
    FLAG_GET_BOUGHT,
    FLAG_SET_BOUGHT,
};

#endif // GUARD_SHOP_H
