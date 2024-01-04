#ifndef GUARD_SHOP_H
#define GUARD_SHOP_H

extern EWRAM_DATA struct ItemSlot gMartPurchaseHistory[3];

void CreatePokemartMenu(const u16 *);
void CreateTMShopMenu(const u16 *, u8 shopId);
void CreateDecorationShop1Menu(const u16 *);
void CreateDecorationShop2Menu(const u16 *);
void CB2_ExitSellMenu(void);

enum ItemBoughtFlags
{
    FLAG_GET_BOUGHT,
    FLAG_SET_BOUGHT,
};

#endif // GUARD_SHOP_H
