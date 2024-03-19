Common_StarPiece::
	finditem ITEM_STAR_PIECE
	addvar VAR_STAR_PIECE_COUNT, 1
	end

Common_EventScript_FindItem::
	callnative GetItemBallIdAndAmountFromTemplate
	finditem VAR_RESULT VAR_0x8009
	end
