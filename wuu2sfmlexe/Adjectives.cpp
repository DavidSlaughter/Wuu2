#include "Adjectives.h"

Adjectives::Adjectives()
{
	// Turn adjectives on/off, set chance %.
	SetAdjectivesOn = true;
	adjectiveChance = 100;

	// Create Adjectives and distribution
	CreateAdjectives();
	AdjectiveProbabilityDistribution = {AdjectiveWeights.begin(), AdjectiveWeights.end()};
}
Adjectives::~Adjectives()
{
}
bool Adjectives::AdjectivesOn()
{
	return SetAdjectivesOn;
}
const std::string Adjectives::GetAdjectiveName(int index) const
{
	return AdjectiveNames[index];
}



// ADJECTIVE CREATION  (1,000 = standard weighting) -> Total = 271

void Adjectives::CreateAdjectives()
{
	using Entry = std::pair<std::string, int>;

	// TEMPLATE (Copy & Paste)
	//Entry {"", };				AdjectiveNames.push_back(.first); AdjectiveWeights.push_back(.second);


	//VERY COMMON ADJECTIVES = 6
	//Entry {"", very_common};						AdjectiveNames.push_back(.first); AdjectiveWeights.push_back(.second);
	int very_common = 3000;
	Entry Beautiful{"beautiful", very_common};			AdjectiveNames.push_back(Beautiful.first); AdjectiveWeights.push_back(Beautiful.second);
	Entry Creepy{"creepy", very_common};				AdjectiveNames.push_back(Creepy.first); AdjectiveWeights.push_back(Creepy.second);
	Entry Disgusting{"disgusting", very_common};		AdjectiveNames.push_back(Disgusting.first); AdjectiveWeights.push_back(Disgusting.second);
	Entry Gorgeous{"gorgeous", very_common};			AdjectiveNames.push_back(Gorgeous.first); AdjectiveWeights.push_back(Gorgeous.second);
	Entry Handsome{"handsome", very_common};			AdjectiveNames.push_back(Handsome.first); AdjectiveWeights.push_back(Handsome.second);
	Entry Repulsive{"repulsive", very_common};			AdjectiveNames.push_back(Repulsive.first); AdjectiveWeights.push_back(Repulsive.second);

	//COMMON ADJECTIVES = 251
	//Entry {"", common};							AdjectiveNames.push_back(.first); AdjectiveWeights.push_back(.second);
	int common = 1000;
	Entry Adorable{"adorable", common};					AdjectiveNames.push_back(Adorable.first); AdjectiveWeights.push_back(Adorable.second);
	Entry Adventurous{"adventurous", common};			AdjectiveNames.push_back(Adventurous.first); AdjectiveWeights.push_back(Adventurous.second);
	Entry Aggressive{"aggressive", common};				AdjectiveNames.push_back(Aggressive.first); AdjectiveWeights.push_back(Aggressive.second);
	Entry Ambition{"ambitious", common};				AdjectiveNames.push_back(Ambition.first); AdjectiveWeights.push_back(Ambition.second);
	Entry Ancient{"ancient", common};					AdjectiveNames.push_back(Ancient.first); AdjectiveWeights.push_back(Ancient.second);
	Entry Angry{"angry", common};						AdjectiveNames.push_back(Angry.first); AdjectiveWeights.push_back(Angry.second);
	Entry Annoying{"annoying", common};					AdjectiveNames.push_back(Annoying.first); AdjectiveWeights.push_back(Annoying.second);
	Entry Attractive{"attractive", common};				AdjectiveNames.push_back(Attractive.first); AdjectiveWeights.push_back(Attractive.second);
	Entry Average{"average", common};					AdjectiveNames.push_back(Average.first); AdjectiveWeights.push_back(Average.second);
	Entry Bad{"bad", common};							AdjectiveNames.push_back(Bad.first); AdjectiveWeights.push_back(Bad.second);
	Entry Bald{"bald", common};							AdjectiveNames.push_back(Bald.first); AdjectiveWeights.push_back(Bald.second);
	Entry Bewildered{"bewildered", common};				AdjectiveNames.push_back(Bewildered.first); AdjectiveWeights.push_back(Bewildered.second);
	Entry Big{"big", common};							AdjectiveNames.push_back(Big.first); AdjectiveWeights.push_back(Big.second);
	Entry Brainy{"brainy", common};						AdjectiveNames.push_back(Brainy.first); AdjectiveWeights.push_back(Brainy.second);
	Entry Brave{"brave", common};						AdjectiveNames.push_back(Brave.first); AdjectiveWeights.push_back(Brave.second);
	Entry Bright{"bright", common};						AdjectiveNames.push_back(Bright.first); AdjectiveWeights.push_back(Bright.second);
	Entry Calm{"calm", common};							AdjectiveNames.push_back(Calm.first); AdjectiveWeights.push_back(Calm.second);
	Entry Charming{"charming", common};					AdjectiveNames.push_back(Charming.first); AdjectiveWeights.push_back(Charming.second);
	Entry Cheerful{"cheerful", common};					AdjectiveNames.push_back(Cheerful.first); AdjectiveWeights.push_back(Cheerful.second);
	Entry Chubby{"chubby", common};						AdjectiveNames.push_back(Chubby.first); AdjectiveWeights.push_back(Chubby.second);
	Entry Clean{"clean", common};						AdjectiveNames.push_back(Clean.first); AdjectiveWeights.push_back(Clean.second);
	Entry Clever{"clever", common};						AdjectiveNames.push_back(Clever.first); AdjectiveWeights.push_back(Clever.second);
	Entry Clumsy{"clumsy", common};						AdjectiveNames.push_back(Clumsy.first); AdjectiveWeights.push_back(Clumsy.second);
	Entry Concerned{"concerned", common};				AdjectiveNames.push_back(Concerned.first); AdjectiveWeights.push_back(Concerned.second);
	Entry Confused{"confused", common};					AdjectiveNames.push_back(Confused.first); AdjectiveWeights.push_back(Confused.second);
	Entry Cranky{"cranky", common};						AdjectiveNames.push_back(Cranky.first); AdjectiveWeights.push_back(Cranky.second);
	Entry Crooked{"crooked", common};					AdjectiveNames.push_back(Crooked.first); AdjectiveWeights.push_back(Crooked.second);
	Entry Cruel{"cruel", common};						AdjectiveNames.push_back(Cruel.first); AdjectiveWeights.push_back(Cruel.second);
	Entry Crusty{"crusty", common};						AdjectiveNames.push_back(Crusty.first); AdjectiveWeights.push_back(Crusty.second);
	Entry Crying{"crying", common};						AdjectiveNames.push_back(Crying.first); AdjectiveWeights.push_back(Crying.second);
	Entry Cuddly{"cuddly", common};						AdjectiveNames.push_back(Cuddly.first); AdjectiveWeights.push_back(Cuddly.second);
	Entry Cute{"cute", common};							AdjectiveNames.push_back(Cute.first); AdjectiveWeights.push_back(Cute.second);
	Entry Dangerous{"dangerous", common};				AdjectiveNames.push_back(Dangerous.first); AdjectiveWeights.push_back(Dangerous.second);
	Entry Dazzling{"dazzling", common};					AdjectiveNames.push_back(Dazzling.first); AdjectiveWeights.push_back(Dazzling.second);
	Entry Dead{"dead", common};							AdjectiveNames.push_back(Dead.first); AdjectiveWeights.push_back(Dead.second);
	Entry Decayed{"decayed", common};					AdjectiveNames.push_back(Decayed.first); AdjectiveWeights.push_back(Decayed.second);
	Entry Defiant{"defiant", common};					AdjectiveNames.push_back(Defiant.first); AdjectiveWeights.push_back(Defiant.second);
	Entry Deformed{"deformed", common};					AdjectiveNames.push_back(Deformed.first); AdjectiveWeights.push_back(Deformed.second);
	Entry Delightful{"delightful", common};				AdjectiveNames.push_back(Delightful.first); AdjectiveWeights.push_back(Delightful.second);
	Entry Deluded{"deluded", common};					AdjectiveNames.push_back(Deluded.first); AdjectiveWeights.push_back(Deluded.second);
	Entry Demented{"demented", common};					AdjectiveNames.push_back(Demented.first); AdjectiveWeights.push_back(Demented.second);
	Entry Demonic{"demonic", common};					AdjectiveNames.push_back(Demonic.first); AdjectiveWeights.push_back(Demonic.second);
	Entry Depressed{"depressed", common};				AdjectiveNames.push_back(Depressed.first); AdjectiveWeights.push_back(Depressed.second);
	Entry Deranged{"deranged", common};					AdjectiveNames.push_back(Deranged.first); AdjectiveWeights.push_back(Deranged.second);
	Entry Determined{"determined", common};				AdjectiveNames.push_back(Determined.first); AdjectiveWeights.push_back(Determined.second);
	Entry Dirty{"dirty", common};						AdjectiveNames.push_back(Dirty.first); AdjectiveWeights.push_back(Dirty.second);
	Entry Disabled{"disabled", common};					AdjectiveNames.push_back(Disabled.first); AdjectiveWeights.push_back(Disabled.second);
	Entry Disobedient{"dsiobedient", common};			AdjectiveNames.push_back(Disobedient.first); AdjectiveWeights.push_back(Disobedient.second);
	Entry Disturbed{"disturbed", common};				AdjectiveNames.push_back(Disturbed.first); AdjectiveWeights.push_back(Disturbed.second);
	Entry Dysfunctional{"dysfunctional", common};		AdjectiveNames.push_back(Dysfunctional.first); AdjectiveWeights.push_back(Dysfunctional.second);
	Entry Eager{"eager", common};						AdjectiveNames.push_back(Eager.first); AdjectiveWeights.push_back(Eager.second);
	Entry Elegant{"elegant", common};					AdjectiveNames.push_back(Elegant.first); AdjectiveWeights.push_back(Elegant.second);
	Entry Elusive{"elusive", common};					AdjectiveNames.push_back(Elusive.first); AdjectiveWeights.push_back(Elusive.second);
	Entry Enchanting{"enchanting", common};				AdjectiveNames.push_back(Enchanting.first); AdjectiveWeights.push_back(Enchanting.second);
	Entry Energetic{"energetic", common};				AdjectiveNames.push_back(Energetic.first); AdjectiveWeights.push_back(Energetic.second);
	Entry Enthusiastic{"enthusiastic", common};			AdjectiveNames.push_back(Enthusiastic.first); AdjectiveWeights.push_back(Enthusiastic.second);
	Entry Ethereal{"ethereal", common};					AdjectiveNames.push_back(Ethereal.first); AdjectiveWeights.push_back(Ethereal.second);
	Entry Evasive{"evasive", common};					AdjectiveNames.push_back(Evasive.first); AdjectiveWeights.push_back(Evasive.second);
	Entry Evil{"evil", common};							AdjectiveNames.push_back(Evil.first); AdjectiveWeights.push_back(Evil.second);
	Entry Exceptional{"exceptional", common};			AdjectiveNames.push_back(Exceptional.first); AdjectiveWeights.push_back(Exceptional.second);
	Entry Excited{"excited", common};					AdjectiveNames.push_back(Excited.first); AdjectiveWeights.push_back(Excited.second);
	Entry Faithful{"faithful", common};					AdjectiveNames.push_back(Faithful.first); AdjectiveWeights.push_back(Faithful.second);
	Entry Flabby{"flabby", common};						AdjectiveNames.push_back(Flabby.first); AdjectiveWeights.push_back(Flabby.second);
	Entry Fancy{"fancy", common};						AdjectiveNames.push_back(Fancy.first); AdjectiveWeights.push_back(Fancy.second);
	Entry Fantastic{"fantastic", common};				AdjectiveNames.push_back(Fantastic.first); AdjectiveWeights.push_back(Fantastic.second);
	Entry Fast{"fast", common};							AdjectiveNames.push_back(Fast.first); AdjectiveWeights.push_back(Fast.second);
	Entry Fat{"fat", common};							AdjectiveNames.push_back(Fat.first); AdjectiveWeights.push_back(Fat.second);
	Entry Feared{"feared", common};						AdjectiveNames.push_back(Feared.first); AdjectiveWeights.push_back(Feared.second);
	Entry Fearless{"fearless", common};					AdjectiveNames.push_back(Fearless.first); AdjectiveWeights.push_back(Fearless.second);
	Entry Ferocious{"ferocious", common};				AdjectiveNames.push_back(Ferocious.first); AdjectiveWeights.push_back(Ferocious.second);
	Entry Fiendish{"fiendish", common};					AdjectiveNames.push_back(Fiendish.first); AdjectiveWeights.push_back(Fiendish.second);
	Entry Fierce{"fierce", common};						AdjectiveNames.push_back(Fierce.first); AdjectiveWeights.push_back(Fierce.second);
	Entry Fiery{"fiery", common};						AdjectiveNames.push_back(Fiery.first); AdjectiveWeights.push_back(Fiery.second);
	Entry Filthy{"filthy", common};						AdjectiveNames.push_back(Filthy.first); AdjectiveWeights.push_back(Filthy.second);
	Entry Flirtatious{"flirtatious", common};			AdjectiveNames.push_back(Flirtatious.first); AdjectiveWeights.push_back(Flirtatious.second);
	Entry Fluffy{"fluffy", common};						AdjectiveNames.push_back(Fluffy.first); AdjectiveWeights.push_back(Fluffy.second);
	Entry Foolish{"foolish", common};					AdjectiveNames.push_back(Foolish.first); AdjectiveWeights.push_back(Foolish.second);
	Entry Formidable{"formidable", common};				AdjectiveNames.push_back(Formidable.first); AdjectiveWeights.push_back(Formidable.second);
	Entry Foul{"foul", common};							AdjectiveNames.push_back(Foul.first); AdjectiveWeights.push_back(Foul.second);
	Entry Fragile{"fragile", common};					AdjectiveNames.push_back(Fragile.first); AdjectiveWeights.push_back(Fragile.second);
	Entry Frail{"frail", common};						AdjectiveNames.push_back(Frail.first); AdjectiveWeights.push_back(Frail.second);
	Entry Frantic{"frantic", common};					AdjectiveNames.push_back(Frantic.first); AdjectiveWeights.push_back(Frantic.second);
	Entry Friendly{"friendly", common};					AdjectiveNames.push_back(Friendly.first); AdjectiveWeights.push_back(Friendly.second);
	Entry Frightened{"frightened", common};				AdjectiveNames.push_back(Frightened.first); AdjectiveWeights.push_back(Frightened.second);
	Entry Frustrated{"frustrated", common};				AdjectiveNames.push_back(Frustrated.first); AdjectiveWeights.push_back(Frustrated.second);
	Entry Funny{"funny", common};						AdjectiveNames.push_back(Funny.first); AdjectiveWeights.push_back(Funny.second);
	Entry Furious{"furious", common};					AdjectiveNames.push_back(Furious.first); AdjectiveWeights.push_back(Furious.second);
	Entry Fuzzy{"fuzzy", common};						AdjectiveNames.push_back(Fuzzy.first); AdjectiveWeights.push_back(Fuzzy.second);
	Entry Gentle{"gentle", common};						AdjectiveNames.push_back(Gentle.first); AdjectiveWeights.push_back(Gentle.second);
	Entry Ghastly{"ghastly", common};					AdjectiveNames.push_back(Ghastly.first); AdjectiveWeights.push_back(Ghastly.second);
	Entry Giant{"giant", common};						AdjectiveNames.push_back(Giant.first); AdjectiveWeights.push_back(Giant.second);
	Entry Gigantic{"gigantic", common};					AdjectiveNames.push_back(Gigantic.first); AdjectiveWeights.push_back(Gigantic.second);
	Entry Glamorous{"glamorous", common};				AdjectiveNames.push_back(Glamorous.first); AdjectiveWeights.push_back(Glamorous.second);
	Entry Glorious{"glorious", common};					AdjectiveNames.push_back(Glorious.first); AdjectiveWeights.push_back(Glorious.second);
	Entry Gnarly{"gnarly", common};						AdjectiveNames.push_back(Gnarly.first); AdjectiveWeights.push_back(Gnarly.second);
	Entry Goofy{"goofy", common};						AdjectiveNames.push_back(Goofy.first); AdjectiveWeights.push_back(Goofy.second);
	Entry Graceful{"graceful", common};					AdjectiveNames.push_back(Graceful.first); AdjectiveWeights.push_back(Graceful.second);
	Entry Greasy{"greasy", common};						AdjectiveNames.push_back(Greasy.first); AdjectiveWeights.push_back(Greasy.second);
	Entry Great{"great", common};						AdjectiveNames.push_back(Great.first); AdjectiveWeights.push_back(Great.second);
	Entry Greedy{"greedy", common};						AdjectiveNames.push_back(Greedy.first); AdjectiveWeights.push_back(Greedy.second);
	Entry Gross{"gross", common};						AdjectiveNames.push_back(Gross.first); AdjectiveWeights.push_back(Gross.second);
	Entry Grumpy{"grumpy", common};						AdjectiveNames.push_back(Grumpy.first); AdjectiveWeights.push_back(Grumpy.second);
	Entry Happy{"happy", common};						AdjectiveNames.push_back(Happy.first); AdjectiveWeights.push_back(Happy.second);
	Entry Helpless{"helpless", common};					AdjectiveNames.push_back(Helpless.first); AdjectiveWeights.push_back(Helpless.second);
	Entry Hilarious{"hilarious", common};				AdjectiveNames.push_back(Hilarious.first); AdjectiveWeights.push_back(Hilarious.second);
	Entry Horrible{"horrible", common};					AdjectiveNames.push_back(Horrible.first); AdjectiveWeights.push_back(Horrible.second);
	Entry Hungry{"hungry", common};						AdjectiveNames.push_back(Hungry.first); AdjectiveWeights.push_back(Hungry.second);
	Entry Hot{"hot", common};							AdjectiveNames.push_back(Hot.first); AdjectiveWeights.push_back(Hot.second);
	Entry Huge{"huge", common};							AdjectiveNames.push_back(Huge.first); AdjectiveWeights.push_back(Huge.second);
	Entry Immaculate{"immaculate", common};				AdjectiveNames.push_back(Immaculate.first); AdjectiveWeights.push_back(Immaculate.second);
	Entry Impatient{"impatient", common};				AdjectiveNames.push_back(Impatient.first); AdjectiveWeights.push_back(Impatient.second);
	Entry Inert{"inert", common};						AdjectiveNames.push_back(Inert.first); AdjectiveWeights.push_back(Inert.second);
	Entry Inferior{"inferior", common};					AdjectiveNames.push_back(Inferior.first); AdjectiveWeights.push_back(Inferior.second);
	Entry Infuriated{"infuriated", common};				AdjectiveNames.push_back(Infuriated.first); AdjectiveWeights.push_back(Infuriated.second);
	Entry Innocent{"innocent", common};					AdjectiveNames.push_back(Innocent.first); AdjectiveWeights.push_back(Innocent.second);
	Entry Inquisitive{"inquisitive", common};			AdjectiveNames.push_back(Inquisitive.first); AdjectiveWeights.push_back(Inquisitive.second);
	Entry Irate{"irate", common};						AdjectiveNames.push_back(Irate.first); AdjectiveWeights.push_back(Irate.second);
	Entry Irritable{"irritable", common};				AdjectiveNames.push_back(Irritable.first); AdjectiveWeights.push_back(Irritable.second);
	Entry Irritating{"irritating", common};				AdjectiveNames.push_back(Irritating.first); AdjectiveWeights.push_back(Irritating.second);
	Entry Jaded{"jaded", common};						AdjectiveNames.push_back(Jaded.first); AdjectiveWeights.push_back(Jaded.second);
	Entry Jittery{"jittery", common};					AdjectiveNames.push_back(Jittery.first); AdjectiveWeights.push_back(Jittery.second);
	Entry Jolly{"jolly", common};						AdjectiveNames.push_back(Jolly.first); AdjectiveWeights.push_back(Jolly.second);
	Entry Juicy{"juicy", common};						AdjectiveNames.push_back(Juicy.first); AdjectiveWeights.push_back(Juicy.second);
	Entry Kind{"kind", common};							AdjectiveNames.push_back(Kind.first); AdjectiveWeights.push_back(Kind.second);
	Entry Kindhearted{"kindhearted", common};			AdjectiveNames.push_back(Kindhearted.first); AdjectiveWeights.push_back(Kindhearted.second);
	Entry Lazy{"lazy", common};							AdjectiveNames.push_back(Lazy.first); AdjectiveWeights.push_back(Lazy.second);
	Entry Lively{"lively", common};						AdjectiveNames.push_back(Lively.first); AdjectiveWeights.push_back(Lively.second);
	Entry Long{"long", common};							AdjectiveNames.push_back(Long.first); AdjectiveWeights.push_back(Long.second);
	Entry Lovely{"lovely", common};						AdjectiveNames.push_back(Lovely.first); AdjectiveWeights.push_back(Lovely.second);
	Entry Loud{"loud", common};							AdjectiveNames.push_back(Loud.first); AdjectiveWeights.push_back(Loud.second);
	Entry Loyal{"loyal", common};						AdjectiveNames.push_back(Loyal.first); AdjectiveWeights.push_back(Loyal.second);
	Entry Lucky{"lucky", common};						AdjectiveNames.push_back(Lucky.first); AdjectiveWeights.push_back(Lucky.second);
	Entry Mad{"mad", common};							AdjectiveNames.push_back(Mad.first); AdjectiveWeights.push_back(Mad.second);
	Entry Magic{"magic", common};						AdjectiveNames.push_back(Magic.first); AdjectiveWeights.push_back(Magic.second);
	Entry Magnificent{"magnificent", common};			AdjectiveNames.push_back(Magnificent.first); AdjectiveWeights.push_back(Magnificent.second);
	Entry Majestic{"majestic", common};					AdjectiveNames.push_back(Majestic.first); AdjectiveWeights.push_back(Majestic.second);
	Entry Massive{"massive", common};					AdjectiveNames.push_back(Massive.first); AdjectiveWeights.push_back(Massive.second);
	Entry Mean{"mean", common};							AdjectiveNames.push_back(Mean.first); AdjectiveWeights.push_back(Mean.second);
	Entry Microscopic{"microscopic", common};			AdjectiveNames.push_back(Microscopic.first); AdjectiveWeights.push_back(Microscopic.second);
	Entry Mighty{"mighty", common};						AdjectiveNames.push_back(Mighty.first); AdjectiveWeights.push_back(Mighty.second);
	Entry Miniature{"miniature", common};				AdjectiveNames.push_back(Miniature.first); AdjectiveWeights.push_back(Miniature.second);
	Entry Misty{"misty", common};						AdjectiveNames.push_back(Misty.first); AdjectiveWeights.push_back(Misty.second);
	Entry Moist{"moist", common};						AdjectiveNames.push_back(Moist.first); AdjectiveWeights.push_back(Moist.second);
	Entry Monstrous{"monstrous", common};				AdjectiveNames.push_back(Monstrous.first); AdjectiveWeights.push_back(Monstrous.second);
	Entry Motionless{"motionless", common};				AdjectiveNames.push_back(Motionless.first); AdjectiveWeights.push_back(Motionless.second);
	Entry Mouldy{"mouldy", common};						AdjectiveNames.push_back(Mouldy.first); AdjectiveWeights.push_back(Mouldy.second);
	Entry Muscular{"muscular", common};					AdjectiveNames.push_back(Muscular.first); AdjectiveWeights.push_back(Muscular.second);
	Entry Mysterious{"mysterious", common};				AdjectiveNames.push_back(Mysterious.first); AdjectiveWeights.push_back(Mysterious.second);
	Entry Mystical{"mystical", common};					AdjectiveNames.push_back(Mystical.first); AdjectiveWeights.push_back(Mystical.second);
	Entry Mythical{"mythical", common};					AdjectiveNames.push_back(Mythical.first); AdjectiveWeights.push_back(Mythical.second);
	Entry Naive{"naive", common};						AdjectiveNames.push_back(Naive.first); AdjectiveWeights.push_back(Naive.second);
	Entry Nasty{"nasty", common};						AdjectiveNames.push_back(Nasty.first); AdjectiveWeights.push_back(Nasty.second);
	Entry Naughty{"naughty", common};					AdjectiveNames.push_back(Naughty.first); AdjectiveWeights.push_back(Naughty.second);
	Entry Nervous{"nervous", common};					AdjectiveNames.push_back(Nervous.first); AdjectiveWeights.push_back(Nervous.second);
	Entry Nice{"nice", common};							AdjectiveNames.push_back(Nice.first); AdjectiveWeights.push_back(Nice.second);
	Entry Noisey{"noisey", common};						AdjectiveNames.push_back(Noisey.first); AdjectiveWeights.push_back(Noisey.second);
	Entry Nutty{"nutty", common};						AdjectiveNames.push_back(Nutty.first); AdjectiveWeights.push_back(Nutty.second);
	Entry Obedient{"obedient", common};					AdjectiveNames.push_back(Obedient.first); AdjectiveWeights.push_back(Obedient.second);
	Entry Obnoxious{"obnoxious", common};				AdjectiveNames.push_back(Obnoxious.first); AdjectiveWeights.push_back(Obnoxious.second);
	Entry Odd{"odd", common};							AdjectiveNames.push_back(Odd.first); AdjectiveWeights.push_back(Odd.second);
	Entry Old{"old", common};							AdjectiveNames.push_back(Old.first); AdjectiveWeights.push_back(Old.second);
	Entry Outrageous{"outrageous", common};				AdjectiveNames.push_back(Outrageous.first); AdjectiveWeights.push_back(Outrageous.second);
	Entry Outstanding{"outstanding", common};			AdjectiveNames.push_back(Outstanding.first); AdjectiveWeights.push_back(Outstanding.second);
	Entry Panicky{"panicky", common};					AdjectiveNames.push_back(Panicky.first); AdjectiveWeights.push_back(Panicky.second);
	Entry Pathetic{"pathetic", common};					AdjectiveNames.push_back(Pathetic.first); AdjectiveWeights.push_back(Pathetic.second);
	Entry Peaceful{"peaceful", common};					AdjectiveNames.push_back(Peaceful.first); AdjectiveWeights.push_back(Peaceful.second);
	Entry Peculiar{"peculiar", common};					AdjectiveNames.push_back(Peculiar.first); AdjectiveWeights.push_back(Peculiar.second);
	Entry Perfect{"perfect", common};					AdjectiveNames.push_back(Perfect.first); AdjectiveWeights.push_back(Perfect.second);
	Entry Perky{"perky", common};						AdjectiveNames.push_back(Perky.first); AdjectiveWeights.push_back(Perky.second);
	Entry Perplexed{"perplexed", common};				AdjectiveNames.push_back(Perplexed.first); AdjectiveWeights.push_back(Perplexed.second);
	Entry Phenominal{"phenominal", common};				AdjectiveNames.push_back(Phenominal.first); AdjectiveWeights.push_back(Phenominal.second);
	Entry Pitiful{"pitiful", common};					AdjectiveNames.push_back(Pitiful.first); AdjectiveWeights.push_back(Pitiful.second);
	Entry Plain{"plain", common};						AdjectiveNames.push_back(Plain.first); AdjectiveWeights.push_back(Plain.second);
	Entry Pleasant{"pleasant", common};					AdjectiveNames.push_back(Pleasant.first); AdjectiveWeights.push_back(Pleasant.second);
	Entry Plump{"plump", common};						AdjectiveNames.push_back(Plump.first); AdjectiveWeights.push_back(Plump.second);
	Entry Polite{"polite", common};						AdjectiveNames.push_back(Polite.first); AdjectiveWeights.push_back(Polite.second);
	Entry Powerful{"powerful", common};					AdjectiveNames.push_back(Powerful.first); AdjectiveWeights.push_back(Powerful.second);
	Entry Precious{"precious", common};					AdjectiveNames.push_back(Precious.first); AdjectiveWeights.push_back(Precious.second);
	Entry Pregnant{"pregnant", common};					AdjectiveNames.push_back(Pregnant.first); AdjectiveWeights.push_back(Pregnant.second);
	Entry Prehistoric{"prehistoric", common};			AdjectiveNames.push_back(Prehistoric.first); AdjectiveWeights.push_back(Prehistoric.second);
	Entry Pretty{"pretty", common};						AdjectiveNames.push_back(Pretty.first); AdjectiveWeights.push_back(Pretty.second);
	Entry Prickly{"prickly", common};					AdjectiveNames.push_back(Prickly.first); AdjectiveWeights.push_back(Prickly.second);
	Entry Proud{"proud", common};						AdjectiveNames.push_back(Proud.first); AdjectiveWeights.push_back(Proud.second);
	Entry Puffy{"puffy", common};						AdjectiveNames.push_back(Puffy.first); AdjectiveWeights.push_back(Puffy.second);
	Entry Pungent{"pungent", common};					AdjectiveNames.push_back(Pungent.first); AdjectiveWeights.push_back(Pungent.second);
	Entry Puny{"puny", common};							AdjectiveNames.push_back(Puny.first); AdjectiveWeights.push_back(Puny.second);
	Entry Putrid{"putrid", common};						AdjectiveNames.push_back(Putrid.first); AdjectiveWeights.push_back(Putrid.second);
	Entry Puzzled{"puzzled", common};					AdjectiveNames.push_back(Puzzled.first); AdjectiveWeights.push_back(Puzzled.second);
	Entry Quiet{"quiet", common};						AdjectiveNames.push_back(Quiet.first); AdjectiveWeights.push_back(Quiet.second);
	Entry Quick{"quick", common};						AdjectiveNames.push_back(Quick.first); AdjectiveWeights.push_back(Quick.second);
	Entry Quirky{"quirky", common};						AdjectiveNames.push_back(Quirky.first); AdjectiveWeights.push_back(Quirky.second);
	Entry Rabid{"rabid", common};						AdjectiveNames.push_back(Rabid.first); AdjectiveWeights.push_back(Rabid.second);
	Entry Racist{"racist", common};						AdjectiveNames.push_back(Racist.first); AdjectiveWeights.push_back(Racist.second);
	Entry Raging{"raging", common};						AdjectiveNames.push_back(Raging.first); AdjectiveWeights.push_back(Raging.second);
	Entry Rotten{"rotten", common};						AdjectiveNames.push_back(Rotten.first); AdjectiveWeights.push_back(Rotten.second);
	Entry Salty{"salty", common};						AdjectiveNames.push_back(Salty.first); AdjectiveWeights.push_back(Salty.second);
	Entry Scary{"scary", common};						AdjectiveNames.push_back(Scary.first); AdjectiveWeights.push_back(Scary.second);
	Entry Scrawny{"scrawny", common};					AdjectiveNames.push_back(Scrawny.first); AdjectiveWeights.push_back(Scrawny.second);
	Entry Screeching{"screeching", common};				AdjectiveNames.push_back(Screeching.first); AdjectiveWeights.push_back(Screeching.second);
	Entry Scruffy{"scruffy", common};					AdjectiveNames.push_back(Scruffy.first); AdjectiveWeights.push_back(Scruffy.second);
	Entry Selfish{"selfish", common};					AdjectiveNames.push_back(Selfish.first); AdjectiveWeights.push_back(Selfish.second);
	Entry Shiny{"shiny", common};						AdjectiveNames.push_back(Shiny.first); AdjectiveWeights.push_back(Shiny.second);
	Entry Short{"short", common};						AdjectiveNames.push_back(Short.first); AdjectiveWeights.push_back(Short.second);
	Entry Shy{"shy", common};							AdjectiveNames.push_back(Shy.first); AdjectiveWeights.push_back(Shy.second);
	Entry Silly{"silly", common};						AdjectiveNames.push_back(Silly.first); AdjectiveWeights.push_back(Silly.second);
	Entry Skinny{"skinny", common};						AdjectiveNames.push_back(Skinny.first); AdjectiveWeights.push_back(Skinny.second);
	Entry Sleepy{"sleepy", common};						AdjectiveNames.push_back(Sleepy.first); AdjectiveWeights.push_back(Sleepy.second);
	Entry Slimy{"slimy", common};						AdjectiveNames.push_back(Slimy.first); AdjectiveWeights.push_back(Slimy.second);
	Entry Slow{"slow", common};							AdjectiveNames.push_back(Slow.first); AdjectiveWeights.push_back(Slow.second);
	Entry Small{"small", common};						AdjectiveNames.push_back(Small.first); AdjectiveWeights.push_back(Small.second);
	Entry Sparkling{"sparkling", common};				AdjectiveNames.push_back(Sparkling.first); AdjectiveWeights.push_back(Sparkling.second);
	Entry Splendid{"splendid", common};					AdjectiveNames.push_back(Splendid.first); AdjectiveWeights.push_back(Splendid.second);
	Entry Sticky{"sticky", common};						AdjectiveNames.push_back(Sticky.first); AdjectiveWeights.push_back(Sticky.second);
	Entry Strange{"strange", common};					AdjectiveNames.push_back(Strange.first); AdjectiveWeights.push_back(Strange.second);
	Entry Strong{"strong", common};						AdjectiveNames.push_back(Strong.first); AdjectiveWeights.push_back(Strong.second);
	Entry Stupendous{"stupendous", common};				AdjectiveNames.push_back(Stupendous.first); AdjectiveWeights.push_back(Stupendous.second);
	Entry Stupid{"stupid", common};						AdjectiveNames.push_back(Stupid.first); AdjectiveWeights.push_back(Stupid.second);
	Entry Succulent{"succulent", common};				AdjectiveNames.push_back(Succulent.first); AdjectiveWeights.push_back(Succulent.second);
	Entry Sweaty{"sweaty", common};						AdjectiveNames.push_back(Sweaty.first); AdjectiveWeights.push_back(Sweaty.second);
	Entry Tall{"tall", common};							AdjectiveNames.push_back(Tall.first); AdjectiveWeights.push_back(Tall.second);
	Entry Tasty{"tasty", common};						AdjectiveNames.push_back(Tasty.first); AdjectiveWeights.push_back(Tasty.second);
	Entry Tight{"tight", common};						AdjectiveNames.push_back(Tight.first); AdjectiveWeights.push_back(Tight.second);
	Entry Tiny{"tiny", common};							AdjectiveNames.push_back(Tiny.first); AdjectiveWeights.push_back(Tiny.second);
	Entry Tormented{"tormented", common};				AdjectiveNames.push_back(Tormented.first); AdjectiveWeights.push_back(Tormented.second);
	Entry Toxic{"toxic", common};						AdjectiveNames.push_back(Toxic.first); AdjectiveWeights.push_back(Toxic.second);
	Entry Tranquil{"tranquil", common};					AdjectiveNames.push_back(Tranquil.first); AdjectiveWeights.push_back(Tranquil.second);
	Entry Transcendent{"transcendent", common};			AdjectiveNames.push_back(Transcendent.first); AdjectiveWeights.push_back(Transcendent.second);
	Entry Twinkly{"twinkly", common};					AdjectiveNames.push_back(Twinkly.first); AdjectiveWeights.push_back(Twinkly.second);
	Entry Ugly{"ugly", common};							AdjectiveNames.push_back(Ugly.first); AdjectiveWeights.push_back(Ugly.second);
	Entry Unattractive{"unacttractive", common};		AdjectiveNames.push_back(Unattractive.first); AdjectiveWeights.push_back(Unattractive.second);
	Entry Unfathomable{"unfathomable", common};			AdjectiveNames.push_back(Unfathomable.first); AdjectiveWeights.push_back(Unfathomable.second);
	Entry Unkempt{"unkempt", common};					AdjectiveNames.push_back(Unkempt.first); AdjectiveWeights.push_back(Unkempt.second);
	Entry Unpleasant{"unpleasant", common};				AdjectiveNames.push_back(Unpleasant.first); AdjectiveWeights.push_back(Unpleasant.second);
	Entry Unremarkable{"unremarkable", common};			AdjectiveNames.push_back(Unremarkable.first); AdjectiveWeights.push_back(Unremarkable.second);
	Entry Unsightly{"unsightly", common};				AdjectiveNames.push_back(Unsightly.first); AdjectiveWeights.push_back(Unsightly.second);
	Entry Untamable{"untamable", common};				AdjectiveNames.push_back(Untamable.first); AdjectiveWeights.push_back(Untamable.second);
	Entry Velvety{"velvety", common};					AdjectiveNames.push_back(Velvety.first); AdjectiveWeights.push_back(Velvety.second);
	Entry Vengeful{"vengeful", common};					AdjectiveNames.push_back(Vengeful.first); AdjectiveWeights.push_back(Vengeful.second);
	Entry Venomous{"venomous", common};					AdjectiveNames.push_back(Venomous.first); AdjectiveWeights.push_back(Venomous.second);
	Entry Vibrant{"vibrant", common};					AdjectiveNames.push_back(Vibrant.first); AdjectiveWeights.push_back(Vibrant.second);
	Entry Vicious{"vicious", common};					AdjectiveNames.push_back(Vicious.first); AdjectiveWeights.push_back(Vicious.second);
	Entry Vigilant{"vigilant", common};					AdjectiveNames.push_back(Vigilant.first); AdjectiveWeights.push_back(Vigilant.second);
	Entry Weak{"weak", common};							AdjectiveNames.push_back(Weak.first); AdjectiveWeights.push_back(Weak.second);
	Entry Weird{"weird", common};						AdjectiveNames.push_back(Weird.first); AdjectiveWeights.push_back(Weird.second);
	Entry Wet{"wet", common};							AdjectiveNames.push_back(Wet.first); AdjectiveWeights.push_back(Wet.second);
	Entry Witty{"witty", common};						AdjectiveNames.push_back(Witty.first); AdjectiveWeights.push_back(Witty.second);
	Entry Wonderful{"wonderful", common};				AdjectiveNames.push_back(Wonderful.first); AdjectiveWeights.push_back(Wonderful.second);
	Entry Worthless{"worthless", common};				AdjectiveNames.push_back(Worthless.first); AdjectiveWeights.push_back(Worthless.second);
	Entry Wrinkly{"wrinkly", common};					AdjectiveNames.push_back(Wrinkly.first); AdjectiveWeights.push_back(Wrinkly.second);
	Entry Young{"young", common};						AdjectiveNames.push_back(Young.first); AdjectiveWeights.push_back(Young.second);
	Entry Zesty{"zesty", common};						AdjectiveNames.push_back(Zesty.first); AdjectiveWeights.push_back(Zesty.second);

	//RARE ADJECTIVES = 14
	//Entry{"", rare};								AdjectiveNames.push_back(.first); AdjectiveWeights.push_back(.second);
	int rare = 300;
	Entry Sexy{"sexy", rare};							AdjectiveNames.push_back(Sexy.first); AdjectiveWeights.push_back(Sexy.second);
	Entry Careful{"careful", rare};						AdjectiveNames.push_back(Careful.first); AdjectiveWeights.push_back(Careful.second);
	Entry Comfortable{"comfortable", rare};				AdjectiveNames.push_back(Comfortable.first); AdjectiveWeights.push_back(Comfortable.second);
	Entry Disappointing{"disappointing", rare};			AdjectiveNames.push_back(Disappointing.first); AdjectiveWeights.push_back(Disappointing.second);
	Entry Eldritch{"eldritch", rare};					AdjectiveNames.push_back(Eldritch.first); AdjectiveWeights.push_back(Eldritch.second);
	Entry Grotesque{"grotesque", rare};					AdjectiveNames.push_back(Grotesque.first); AdjectiveWeights.push_back(Grotesque.second);
	Entry Ghostly{"ghostly", rare};						AdjectiveNames.push_back(Ghostly.first); AdjectiveWeights.push_back(Ghostly.second);
	Entry Horny{"horny", rare};							AdjectiveNames.push_back(Horny.first); AdjectiveWeights.push_back(Horny.second);
	Entry Natural{"natural", rare};						AdjectiveNames.push_back(Natural.first); AdjectiveWeights.push_back(Natural.second);
	Entry Nightmarish{"nightmarish", rare};				AdjectiveNames.push_back(Nightmarish.first); AdjectiveWeights.push_back(Nightmarish.second);
	Entry Nocturnal{"nocturnal", rare};					AdjectiveNames.push_back(Nocturnal.first); AdjectiveWeights.push_back(Nocturnal.second);
	Entry Otherworldly{"otherworldly", rare};			AdjectiveNames.push_back(Otherworldly.first); AdjectiveWeights.push_back(Otherworldly.second);
	Entry Preposterous{"preposterous", rare};			AdjectiveNames.push_back(Preposterous.first); AdjectiveWeights.push_back(Preposterous.second);
	Entry Uncanny{"uncanny", rare};						AdjectiveNames.push_back(Uncanny.first); AdjectiveWeights.push_back(Uncanny.second);

	//OTHER ADJECTIVES
}