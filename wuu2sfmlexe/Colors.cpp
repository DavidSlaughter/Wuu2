#include "Colors.h"

Colors::Colors()
{
	CreateColors();
	ColorProbabilityDistribution = {ColorWeights.begin(), ColorWeights.end()};
}
Colors::~Colors()
{
}
const std::string Colors::GetColorName(int index) const
{
	return ColorNames[index];
}


// COLOR CREATION  (1,000 = standard weighting) -> Total = 68

void Colors::CreateColors()
{
	using Entry = std::pair<std::string, int>;

	// TEMPLATE (Copy & Paste)
	//Entry {"", };							ColorNames.push_back(.first); ColorWeights.push_back(.second);


	//VERY COMMON COLORS = 10
	//Entry {"", very_common};						ColorNames.push_back(.first); ColorWeights.push_back(.second);
	int very_common = 5000;
	Entry Black{"black", 3000};							ColorNames.push_back(Black.first); ColorWeights.push_back(Black.second);
	Entry Blue{"blue", very_common};					ColorNames.push_back(Blue.first); ColorWeights.push_back(Blue.second);
	Entry Brown{"brown", very_common};					ColorNames.push_back(Brown.first); ColorWeights.push_back(Brown.second);
	Entry Green{"green", very_common};					ColorNames.push_back(Green.first); ColorWeights.push_back(Green.second);
	Entry Orange{"orange", very_common};				ColorNames.push_back(Orange.first); ColorWeights.push_back(Orange.second);
	Entry Pink{"pink", very_common};					ColorNames.push_back(Pink.first); ColorWeights.push_back(Pink.second);
	Entry Purple{"purple", very_common};				ColorNames.push_back(Purple.first); ColorWeights.push_back(Purple.second);
	Entry Red{"red", very_common};						ColorNames.push_back(Red.first); ColorWeights.push_back(Red.second);
	Entry White{"white", 3000};							ColorNames.push_back(White.first); ColorWeights.push_back(White.second);
	Entry Yellow{"yellow", very_common};				ColorNames.push_back(Yellow.first); ColorWeights.push_back(Yellow.second);

	//COMMON COLORS = 21
	//Entry {"", common};							ColorNames.push_back(.first); ColorWeights.push_back(.second);
	int common = 2000;
	Entry Amber{"amber", common};						ColorNames.push_back(Amber.first); ColorWeights.push_back(Amber.second);
	Entry Aqua{"aqua", common};							ColorNames.push_back(Aqua.first); ColorWeights.push_back(Aqua.second);
	Entry Azure{"azure", common};						ColorNames.push_back(Azure.first); ColorWeights.push_back(Azure.second);
	Entry Bronze{"bronze", common};						ColorNames.push_back(Bronze.first); ColorWeights.push_back(Bronze.second);
	Entry Crimson{"crimson", common};					ColorNames.push_back(Crimson.first); ColorWeights.push_back(Crimson.second);
	Entry Crystal{"crystal", common};					ColorNames.push_back(Crystal.first); ColorWeights.push_back(Crystal.second);
	Entry Cyan{"cyan", common};							ColorNames.push_back(Cyan.first); ColorWeights.push_back(Cyan.second);
	Entry Emerald{"emerald", common};					ColorNames.push_back(Emerald.first); ColorWeights.push_back(Emerald.second);
	Entry Gold{"gold", common};							ColorNames.push_back(Gold.first); ColorWeights.push_back(Gold.second);
	Entry Grey{"grey", common};							ColorNames.push_back(Grey.first); ColorWeights.push_back(Grey.second);
	Entry Indigo{"indigo", common};						ColorNames.push_back(Indigo.first); ColorWeights.push_back(Indigo.second);
	Entry Jade{"jade", common};							ColorNames.push_back(Jade.first); ColorWeights.push_back(Jade.second);
	Entry Magenta{"magenta", common};					ColorNames.push_back(Magenta.first); ColorWeights.push_back(Magenta.second);
	Entry Platinum{"platinum", common};					ColorNames.push_back(Platinum.first); ColorWeights.push_back(Platinum.second);
	Entry Rose{"rose", common};							ColorNames.push_back(Rose.first); ColorWeights.push_back(Rose.second);
	Entry Ruby{"ruby", common};							ColorNames.push_back(Ruby.first); ColorWeights.push_back(Ruby.second);
	Entry Sapphire{"sapphire", common};					ColorNames.push_back(Sapphire.first); ColorWeights.push_back(Sapphire.second);
	Entry Scarlet{"scarlet", common};					ColorNames.push_back(Scarlet.first); ColorWeights.push_back(Scarlet.second);
	Entry Silver{"silver", common};						ColorNames.push_back(Silver.first); ColorWeights.push_back(Silver.second);
	Entry Turquoise{"turquoise", common};				ColorNames.push_back(Turquoise.first); ColorWeights.push_back(Turquoise.second);
	Entry Violet{"violet", common};						ColorNames.push_back(Violet.first); ColorWeights.push_back(Violet.second);

	//RARE COLORS = 34
	//Entry {"", rare};								ColorNames.push_back(.first); ColorWeights.push_back(.second);
	int rare = 300;
	Entry Almond{"almond", rare};						ColorNames.push_back(Almond.first); ColorWeights.push_back(Almond.second);
	Entry Amethyst{"amethyst", rare};					ColorNames.push_back(Amethyst.first); ColorWeights.push_back(Amethyst.second);
	Entry Auburn{"auburn", rare};						ColorNames.push_back(Auburn.first); ColorWeights.push_back(Auburn.second);
	Entry Aquamarine{"aquamarine", rare};				ColorNames.push_back(Aquamarine.first); ColorWeights.push_back(Aquamarine.second);
	Entry BabyBlue{"babyblue", rare};					ColorNames.push_back(BabyBlue.first); ColorWeights.push_back(BabyBlue.second);
	Entry Beige{"beige", rare};							ColorNames.push_back(Beige.first); ColorWeights.push_back(Beige.second);
	Entry Burgundy{"burgundy", rare};					ColorNames.push_back(Burgundy.first); ColorWeights.push_back(Burgundy.second);
	Entry Cerulean{"cerulean", rare};					ColorNames.push_back(Cerulean.first); ColorWeights.push_back(Cerulean.second);
	Entry Chestnut{"chestnut", rare};					ColorNames.push_back(Chestnut.first); ColorWeights.push_back(Chestnut.second);
	Entry Cinnabar{"cinnabar", rare};					ColorNames.push_back(Cinnabar.first); ColorWeights.push_back(Cinnabar.second);
	Entry Citrine{"citrine", rare};						ColorNames.push_back(Citrine.first); ColorWeights.push_back(Citrine.second);
	Entry Copper{"copper", rare};						ColorNames.push_back(Copper.first); ColorWeights.push_back(Copper.second);
	Entry Fuchsia{"fuchsia", rare};						ColorNames.push_back(Fuchsia.first); ColorWeights.push_back(Fuchsia.second);
	Entry Ivory{"ivory", rare};							ColorNames.push_back(Ivory.first); ColorWeights.push_back(Ivory.second);
	Entry Lava{"lava", rare};							ColorNames.push_back(Lava.first); ColorWeights.push_back(Lava.second);
	Entry Lavender{"lavender", rare};					ColorNames.push_back(Lavender.first); ColorWeights.push_back(Lavender.second);
	Entry Lemon{"lemon", rare};							ColorNames.push_back(Lemon.first); ColorWeights.push_back(Lemon.second);
	Entry Lime{"lime", rare};							ColorNames.push_back(Lime.first); ColorWeights.push_back(Lime.second);
	Entry Maroon{"maroon", rare};						ColorNames.push_back(Maroon.first); ColorWeights.push_back(Maroon.second);
	Entry MidnightBlue{"midnight-blue", rare};			ColorNames.push_back(MidnightBlue.first); ColorWeights.push_back(MidnightBlue.second);
	Entry Mustard{"mustard", rare};						ColorNames.push_back(Mustard.first); ColorWeights.push_back(Mustard.second);
	Entry Navy{"navy", rare};							ColorNames.push_back(Navy.first); ColorWeights.push_back(Navy.second);
	Entry NavyBlue{"navy-blue", rare};					ColorNames.push_back(NavyBlue.first); ColorWeights.push_back(NavyBlue.second);
	Entry NeonGreen{"neon-green", rare};				ColorNames.push_back(NeonGreen.first); ColorWeights.push_back(NeonGreen.second);
	Entry Olive{"olive", rare};							ColorNames.push_back(Olive.first); ColorWeights.push_back(Olive.second);
	Entry Onyx{"onyx", rare};							ColorNames.push_back(Onyx.first); ColorWeights.push_back(Onyx.second);
	Entry Opal{"opal", rare};							ColorNames.push_back(Opal.first); ColorWeights.push_back(Opal.second);
	Entry Peach{"peach", rare};							ColorNames.push_back(Peach.first); ColorWeights.push_back(Peach.second);
	Entry Rainbow{"rainbow", rare};						ColorNames.push_back(Rainbow.first); ColorWeights.push_back(Rainbow.second);
	Entry Saffron{"saffron", rare};						ColorNames.push_back(Saffron.first); ColorWeights.push_back(Saffron.second);
	Entry Tan{"tan", rare};								ColorNames.push_back(Tan.first); ColorWeights.push_back(Tan.second);
	Entry Teal{"teal", rare};							ColorNames.push_back(Teal.first); ColorWeights.push_back(Teal.second);
	Entry Vermilion{"vermilion", rare};					ColorNames.push_back(Vermilion.first); ColorWeights.push_back(Vermilion.second);
	Entry Veridian{"veridian", rare};					ColorNames.push_back(Veridian.first); ColorWeights.push_back(Veridian.second);

	//OTHER COLORS = 3
	Entry Byzantine{"byzantine", 30};					ColorNames.push_back(Byzantine.first); ColorWeights.push_back(Byzantine.second);
	Entry Zomp{"zomp", 30};								ColorNames.push_back(Zomp.first); ColorWeights.push_back(Zomp.second);
	Entry Shiny{"shiny", rare};							ColorNames.push_back(Shiny.first); ColorWeights.push_back(Shiny.second);
}