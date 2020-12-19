#include "Animals.h"

Animals::Animals()
{
	CreateAnimals();
	AnimalProbabilityDistribution = {AnimalWeights.begin(), AnimalWeights.end()};
}
Animals::~Animals()
{
}
const std::string Animals::GetAnimalName(int index) const
{
	return AnimalNames[index];
}


// ANIMAL CREATION	(1,000 = standard weighting) -> Total = 162

void Animals::CreateAnimals()
{
	using Entry = std::pair<std::string, int>;

	// TEMPLATE FOR ENTRY (Copy & Paste)
	//Entry {"", };									AnimalNames.push_back(.first); AnimalWeights.push_back(.second);


	// VERY COMMON ANIMALS = 1
	//Entry {"", very_common};									AnimalNames.push_back(.first); AnimalWeights.push_back(.second);
	int very_common = 3000;
	Entry Cow{"cow", very_common};									AnimalNames.push_back(Cow.first); AnimalWeights.push_back(Cow.second);

	// COMMON ANIMALS = 136
	//Entry {"", common};										AnimalNames.push_back(.first); AnimalWeights.push_back(.second);
	int common = 1000;
	Entry Alligator{"alligator", common};							AnimalNames.push_back(Alligator.first); AnimalWeights.push_back(Alligator.second);
	Entry Ant{"ant", common};										AnimalNames.push_back(Ant.first); AnimalWeights.push_back(Ant.second);
	Entry Baboon{"baboon", common};									AnimalNames.push_back(Baboon.first); AnimalWeights.push_back(Baboon.second);
	Entry Badger{"badger", common};									AnimalNames.push_back(Badger.first); AnimalWeights.push_back(Badger.second);
	Entry Bat{"bat", common};										AnimalNames.push_back(Bat.first); AnimalWeights.push_back(Bat.second);
	Entry Bean{"bean", common};										AnimalNames.push_back(Bean.first); AnimalWeights.push_back(Bean.second);
	Entry Bee{"bee", common};										AnimalNames.push_back(Bee.first); AnimalWeights.push_back(Bee.second);
	Entry Bear{"bear", common};										AnimalNames.push_back(Bear.first); AnimalWeights.push_back(Bear.second);
	Entry Bird{"bird", common};										AnimalNames.push_back(Bird.first); AnimalWeights.push_back(Bird.second);
	Entry Bison{"bison", common};									AnimalNames.push_back(Bison.first); AnimalWeights.push_back(Bison.second);
	Entry Bonobo{"bonobo", common};									AnimalNames.push_back(Bonobo.first); AnimalWeights.push_back(Bonobo.second);
	Entry Bumblebee{"bumblebee", common};							AnimalNames.push_back(Bumblebee.first); AnimalWeights.push_back(Bumblebee.second);
	Entry Butterfly{"butterfly", common};							AnimalNames.push_back(Butterfly.first); AnimalWeights.push_back(Butterfly.second);
	Entry Camel{"camel", common};									AnimalNames.push_back(Camel.first); AnimalWeights.push_back(Camel.second);
	Entry Cat{"cat", common};										AnimalNames.push_back(Cat.first); AnimalWeights.push_back(Cat.second);
	Entry Caterpillar{"catterpillar", common};						AnimalNames.push_back(Caterpillar.first); AnimalWeights.push_back(Caterpillar.second);
	Entry Centipede{"centipede", common};							AnimalNames.push_back(Centipede.first); AnimalWeights.push_back(Centipede.second);
	Entry Cheetah{"cheetah", common};								AnimalNames.push_back(Cheetah.first); AnimalWeights.push_back(Cheetah.second);
	Entry Chicken{"chicken", common};								AnimalNames.push_back(Chicken.first); AnimalWeights.push_back(Chicken.second);
	Entry Chimpanzee{"chimpanzee", common};							AnimalNames.push_back(Chimpanzee.first); AnimalWeights.push_back(Chimpanzee.second);
	Entry Chipmunk{"chipmunk", common};								AnimalNames.push_back(Chipmunk.first); AnimalWeights.push_back(Chipmunk.second);
	Entry Crocodile{"crocodile", common};							AnimalNames.push_back(Crocodile.first); AnimalWeights.push_back(Crocodile.second);
	Entry Crab{"crab", common};										AnimalNames.push_back(Crab.first); AnimalWeights.push_back(Crab.second);
	Entry Cuttlefish{"cuttlefish", common};							AnimalNames.push_back(Cuttlefish.first); AnimalWeights.push_back(Cuttlefish.second);
	Entry Deer{"deer", common};										AnimalNames.push_back(Deer.first); AnimalWeights.push_back(Deer.second);
	Entry Dodo{"dodo", common};										AnimalNames.push_back(Dodo.first); AnimalWeights.push_back(Dodo.second);
	Entry Dog{"dog", common};										AnimalNames.push_back(Dog.first); AnimalWeights.push_back(Dog.second);
	Entry Donkey{"donkey", common};									AnimalNames.push_back(Donkey.first); AnimalWeights.push_back(Donkey.second);
	Entry Dragon{"dragon", common};									AnimalNames.push_back(Dragon.first); AnimalWeights.push_back(Dragon.second);
	Entry Dragonfly{"dragonfly", common};							AnimalNames.push_back(Dragonfly.first); AnimalWeights.push_back(Dragonfly.second);
	Entry Duck{"duck", common};										AnimalNames.push_back(Duck.first); AnimalWeights.push_back(Duck.second);
	Entry DungBeetle{"dung-beetle", common};						AnimalNames.push_back(DungBeetle.first); AnimalWeights.push_back(DungBeetle.second);
	Entry Eagle{"eagle", common};									AnimalNames.push_back(Eagle.first); AnimalWeights.push_back(Eagle.second);
	Entry Earwig{"earwig", common};									AnimalNames.push_back(Earwig.first); AnimalWeights.push_back(Earwig.second);
	Entry Elephant{"elephant", common};								AnimalNames.push_back(Elephant.first); AnimalWeights.push_back(Elephant.second);
	Entry Falcon{"falcon", common};									AnimalNames.push_back(Falcon.first); AnimalWeights.push_back(Falcon.second);
	Entry Ferret{"ferret", common};									AnimalNames.push_back(Ferret.first); AnimalWeights.push_back(Ferret.second);
	Entry Fish{"fish", common};										AnimalNames.push_back(Fish.first); AnimalWeights.push_back(Fish.second);
	Entry Flamingo{"flamingo", common};								AnimalNames.push_back(Flamingo.first); AnimalWeights.push_back(Flamingo.second);
	Entry Fly{"fly", common};										AnimalNames.push_back(Fly.first); AnimalWeights.push_back(Fly.second);
	Entry Fox{"fox", common};										AnimalNames.push_back(Fox.first); AnimalWeights.push_back(Fox.second);
	Entry Frog{"frog", common};										AnimalNames.push_back(Frog.first); AnimalWeights.push_back(Frog.second);
	Entry Gecko{"gecko", common};									AnimalNames.push_back(Gecko.first); AnimalWeights.push_back(Gecko.second);
	Entry Gerbil{"gerbil", common};									AnimalNames.push_back(Gerbil.first); AnimalWeights.push_back(Gerbil.second);
	Entry Giraffe{"giraffe", common};								AnimalNames.push_back(Giraffe.first); AnimalWeights.push_back(Giraffe.second);
	Entry Goat{"goat", common};										AnimalNames.push_back(Goat.first); AnimalWeights.push_back(Goat.second);
	Entry Goldfish{"goldfish", common};								AnimalNames.push_back(Goldfish.first); AnimalWeights.push_back(Goldfish.second);
	Entry Goose{"goose", common};									AnimalNames.push_back(Goose.first); AnimalWeights.push_back(Goose.second);
	Entry Gorilla{"gorilla", common};								AnimalNames.push_back(Gorilla.first); AnimalWeights.push_back(Gorilla.second);
	Entry Grasshopper{"grasshopper", common};						AnimalNames.push_back(Grasshopper.first); AnimalWeights.push_back(Grasshopper.second);
	Entry Hampster{"hamster", common};								AnimalNames.push_back(Hampster.first); AnimalWeights.push_back(Hampster.second);
	Entry Hare{"hare", common};										AnimalNames.push_back(Hare.first); AnimalWeights.push_back(Hare.second);
	Entry Hedgehog{"hedgehog", common};								AnimalNames.push_back(Hedgehog.first); AnimalWeights.push_back(Hedgehog.second);
	Entry Heron{"heron", common};									AnimalNames.push_back(Heron.first); AnimalWeights.push_back(Heron.second);
	Entry Hippopotamus{"hippopotamus", common};						AnimalNames.push_back(Hippopotamus.first); AnimalWeights.push_back(Hippopotamus.second);
	Entry Horse{"horse", common};									AnimalNames.push_back(Horse.first); AnimalWeights.push_back(Horse.second);
	Entry Human{"human", common};									AnimalNames.push_back(Human.first); AnimalWeights.push_back(Human.second);
	Entry Hyena{"hyena", common};									AnimalNames.push_back(Hyena.first); AnimalWeights.push_back(Hyena.second);
	Entry Ibis{"ibis", common};										AnimalNames.push_back(Ibis.first); AnimalWeights.push_back(Ibis.second);
	Entry Iguana{"iguana", common};									AnimalNames.push_back(Iguana.first); AnimalWeights.push_back(Iguana.second);
	Entry Insect{"insect", common};									AnimalNames.push_back(Insect.first); AnimalWeights.push_back(Insect.second);
	Entry Jaguar{"jaguar", common};									AnimalNames.push_back(Jaguar.first); AnimalWeights.push_back(Jaguar.second);
	Entry Jellyfish{"jellyfish", common};							AnimalNames.push_back(Jellyfish.first); AnimalWeights.push_back(Jellyfish.second);
	Entry Kakapo{"kakapo", common};									AnimalNames.push_back(Kakapo.first); AnimalWeights.push_back(Kakapo.second);
	Entry Kangaroo{"kangaroo", common};								AnimalNames.push_back(Kangaroo.first); AnimalWeights.push_back(Kangaroo.second);
	Entry Kitten{"kitten", common};									AnimalNames.push_back(Kitten.first); AnimalWeights.push_back(Kitten.second);
	Entry Koala{"koala", common};									AnimalNames.push_back(Koala.first); AnimalWeights.push_back(Koala.second);
	Entry Ladybird{"ladybird", common};								AnimalNames.push_back(Ladybird.first); AnimalWeights.push_back(Ladybird.second);
	Entry Lemur{"lemur", common};									AnimalNames.push_back(Lemur.first); AnimalWeights.push_back(Lemur.second);
	Entry Leopard{"leopard", common};								AnimalNames.push_back(Leopard.first); AnimalWeights.push_back(Leopard.second);
	Entry Lion{"lion", common};										AnimalNames.push_back(Lion.first); AnimalWeights.push_back(Lion.second);
	Entry Lizard{"lizard", common};									AnimalNames.push_back(Lizard.first); AnimalWeights.push_back(Lizard.second);
	Entry Llama{"llama", common};									AnimalNames.push_back(Llama.first); AnimalWeights.push_back(Llama.second);
	Entry Lobster{"lobster", common};								AnimalNames.push_back(Lobster.first); AnimalWeights.push_back(Lobster.second);
	Entry Macaw{"macaw", common};									AnimalNames.push_back(Macaw.first); AnimalWeights.push_back(Macaw.second);
	Entry Magpie{"magpie", common};									AnimalNames.push_back(Magpie.first); AnimalWeights.push_back(Magpie.second);
	Entry Mole{"mole", common};										AnimalNames.push_back(Mole.first); AnimalWeights.push_back(Mole.second);
	Entry Monkey{"monkey", common};									AnimalNames.push_back(Monkey.first); AnimalWeights.push_back(Monkey.second);
	Entry Moose{"moose", common};									AnimalNames.push_back(Moose.first); AnimalWeights.push_back(Moose.second);
	Entry Moth{"moth", common};										AnimalNames.push_back(Moth.first); AnimalWeights.push_back(Moth.second);
	Entry Mouse{"mouse", common};									AnimalNames.push_back(Mouse.first); AnimalWeights.push_back(Mouse.second);
	Entry Neanderthal{"neadnderthal", common};						AnimalNames.push_back(Neanderthal.first); AnimalWeights.push_back(Neanderthal.second);
	Entry Newt{"newt", common};										AnimalNames.push_back(Newt.first); AnimalWeights.push_back(Newt.second);
	Entry Octopus{"octopus", common};								AnimalNames.push_back(Octopus.first); AnimalWeights.push_back(Octopus.second);
	Entry Ostrich{"ostrich", common};								AnimalNames.push_back(Ostrich.first); AnimalWeights.push_back(Ostrich.second);
	Entry Otter{"otter", common};									AnimalNames.push_back(Otter.first); AnimalWeights.push_back(Otter.second);
	Entry Owl{"owl", common};										AnimalNames.push_back(Owl.first); AnimalWeights.push_back(Owl.second);
	Entry Panda{"panda", common};									AnimalNames.push_back(Panda.first); AnimalWeights.push_back(Panda.second);
	Entry Panther{"panther", common};								AnimalNames.push_back(Panther.first); AnimalWeights.push_back(Panther.second);
	Entry Parrot{"parrot", common};									AnimalNames.push_back(Parrot.first); AnimalWeights.push_back(Parrot.second);
	Entry Peacock{"peacock", common};								AnimalNames.push_back(Peacock.first); AnimalWeights.push_back(Peacock.second);
	Entry Penguin{"penguin", common};								AnimalNames.push_back(Penguin.first); AnimalWeights.push_back(Penguin.second);
	Entry Pig{"pig", common};										AnimalNames.push_back(Pig.first); AnimalWeights.push_back(Pig.second);
	Entry Piranha{"piranha", common};								AnimalNames.push_back(Piranha.first); AnimalWeights.push_back(Piranha.second);
	Entry Platypus{"platypus", common};								AnimalNames.push_back(Platypus.first); AnimalWeights.push_back(Platypus.second);
	Entry Prawn{"prawn", common};									AnimalNames.push_back(Prawn.first); AnimalWeights.push_back(Prawn.second);
	Entry Pug{"pug", common};										AnimalNames.push_back(Pug.first); AnimalWeights.push_back(Pug.second);
	Entry Puppy{"puppy", common};									AnimalNames.push_back(Puppy.first); AnimalWeights.push_back(Puppy.second);
	Entry Rabbit{"rabbit", common};									AnimalNames.push_back(Rabbit.first); AnimalWeights.push_back(Rabbit.second);
	Entry Raccoon{"raccoon", common};								AnimalNames.push_back(Raccoon.first); AnimalWeights.push_back(Raccoon.second);
	Entry Rat{"rat", common};										AnimalNames.push_back(Rat.first); AnimalWeights.push_back(Rat.second);
	Entry Reindeer{"reindeer", common};								AnimalNames.push_back(Reindeer.first); AnimalWeights.push_back(Reindeer.second);
	Entry Rhinoceros{"rhinoceros", common};							AnimalNames.push_back(Rhinoceros.first); AnimalWeights.push_back(Rhinoceros.second);
	Entry Rooster{"rooster", common};								AnimalNames.push_back(Rooster.first); AnimalWeights.push_back(Rooster.second);
	Entry Salmon{"salmon", common};									AnimalNames.push_back(Salmon.first); AnimalWeights.push_back(Salmon.second);
	Entry Scorpion{"scorpion", common};								AnimalNames.push_back(Scorpion.first); AnimalWeights.push_back(Scorpion.second);
	Entry Seahorse{"seahorse", common};								AnimalNames.push_back(Seahorse.first); AnimalWeights.push_back(Seahorse.second);
	Entry Seal{"seal", common};										AnimalNames.push_back(Seal.first); AnimalWeights.push_back(Seal.second);
	Entry Shark{"shark", common};									AnimalNames.push_back(Shark.first); AnimalWeights.push_back(Shark.second);
	Entry Sheep{"sheep", common};									AnimalNames.push_back(Sheep.first); AnimalWeights.push_back(Sheep.second);
	Entry Sloth{"sloth", common};									AnimalNames.push_back(Sloth.first); AnimalWeights.push_back(Sloth.second);
	Entry Snail{"snail", common};									AnimalNames.push_back(Snail.first); AnimalWeights.push_back(Snail.second);
	Entry Snake{"snake", common};									AnimalNames.push_back(Snake.first); AnimalWeights.push_back(Snake.second);
	Entry Sparrow{"sparrow", common};								AnimalNames.push_back(Sparrow.first); AnimalWeights.push_back(Sparrow.second);
	Entry Spider{"spider", common};									AnimalNames.push_back(Spider.first); AnimalWeights.push_back(Spider.second);
	Entry Squid{"squid", common};									AnimalNames.push_back(Squid.first); AnimalWeights.push_back(Squid.second);
	Entry Squirrel{"squirrel", common};								AnimalNames.push_back(Squirrel.first); AnimalWeights.push_back(Squirrel.second);
	Entry Starfish{"starfish", common};								AnimalNames.push_back(Starfish.first); AnimalWeights.push_back(Starfish.second);
	Entry Swan{"swan", common};										AnimalNames.push_back(Swan.first); AnimalWeights.push_back(Swan.second);
	Entry Termite{"termite", common};								AnimalNames.push_back(Termite.first); AnimalWeights.push_back(Termite.second);
	Entry Tiger{"tiger", common};									AnimalNames.push_back(Tiger.first); AnimalWeights.push_back(Tiger.second);
	Entry Turtle{"turtle", common};									AnimalNames.push_back(Turtle.first); AnimalWeights.push_back(Turtle.second);
	Entry Tortoise{"tortoise", common};								AnimalNames.push_back(Tortoise.first); AnimalWeights.push_back(Tortoise.second);
	Entry Toucan{"toucan", common};									AnimalNames.push_back(Toucan.first); AnimalWeights.push_back(Toucan.second);
	Entry Turkey{"turkey", common};									AnimalNames.push_back(Turkey.first); AnimalWeights.push_back(Turkey.second);
	Entry Vulture{"vulture", common};								AnimalNames.push_back(Vulture.first); AnimalWeights.push_back(Vulture.second);
	Entry Walrus{"walrus", common};									AnimalNames.push_back(Walrus.first); AnimalWeights.push_back(Walrus.second);
	Entry Wasp{"wasp", common};										AnimalNames.push_back(Wasp.first); AnimalWeights.push_back(Wasp.second);
	Entry Weasle{"weasle", common};									AnimalNames.push_back(Weasle.first); AnimalWeights.push_back(Weasle.second);
	Entry Whale{"whale", common};									AnimalNames.push_back(Whale.first); AnimalWeights.push_back(Whale.second);
	Entry Wolf{"wolf", common};										AnimalNames.push_back(Wolf.first); AnimalWeights.push_back(Wolf.second);
	Entry Woodlouse{"woodlouse", common};							AnimalNames.push_back(Woodlouse.first); AnimalWeights.push_back(Woodlouse.second);
	Entry Woodpecker{"woodpecker", common};							AnimalNames.push_back(Woodpecker.first); AnimalWeights.push_back(Woodpecker.second);
	Entry Worm{"worm", common};										AnimalNames.push_back(Worm.first); AnimalWeights.push_back(Worm.second);
	Entry Yak{"yak", common};										AnimalNames.push_back(Yak.first); AnimalWeights.push_back(Yak.second);
	Entry Zebra{"zebra", common};									AnimalNames.push_back(Zebra.first); AnimalWeights.push_back(Zebra.second);

	// RARE ANIMALS = 25
	//Entry {"", rare};											AnimalNames.push_back(.first); AnimalWeights.push_back(.second);
	int rare = 300;
	Entry Albatross{"albatross", rare};								AnimalNames.push_back(Albatross.first); AnimalWeights.push_back(Albatross.second);
	Entry Antelope{"antelope", rare};								AnimalNames.push_back(Antelope.first); AnimalWeights.push_back(Antelope.second);
	Entry Armadillo{"armadillo", rare};								AnimalNames.push_back(Armadillo.first); AnimalWeights.push_back(Armadillo.second);
	Entry Batfish{"batfish", rare};									AnimalNames.push_back(Batfish.first); AnimalWeights.push_back(Batfish.second);
	Entry Boar{"boar", rare};										AnimalNames.push_back(Boar.first); AnimalWeights.push_back(Boar.second);
	Entry Bull{"bull", rare};										AnimalNames.push_back(Bull.first); AnimalWeights.push_back(Bull.second);
	Entry Cougar{"cougar", rare};									AnimalNames.push_back(Cougar.first); AnimalWeights.push_back(Cougar.second);
	Entry Coyote{"coyote", rare};									AnimalNames.push_back(Coyote.first); AnimalWeights.push_back(Coyote.second);
	Entry Dolphin{"dolphin", rare};									AnimalNames.push_back(Dolphin.first); AnimalWeights.push_back(Dolphin.second);
	Entry Dove{"dove", rare};										AnimalNames.push_back(Dove.first); AnimalWeights.push_back(Dove.second);
	Entry Elk{"elk", rare};											AnimalNames.push_back(Elk.first); AnimalWeights.push_back(Elk.second);
	Entry Emu{"emu", rare};											AnimalNames.push_back(Emu.first); AnimalWeights.push_back(Emu.second);
	Entry Gazelle{"gazelle", rare};									AnimalNames.push_back(Gazelle.first); AnimalWeights.push_back(Gazelle.second);
	Entry Hawk{"hawk", rare};										AnimalNames.push_back(Hawk.first); AnimalWeights.push_back(Hawk.second);
	Entry Jackal{"jackal", rare};									AnimalNames.push_back(Jackal.first); AnimalWeights.push_back(Jackal.second);
	Entry Lynx{"lynx", rare};										AnimalNames.push_back(Lynx.first); AnimalWeights.push_back(Lynx.second);
	Entry Meerkat{"meerkat", rare};									AnimalNames.push_back(Meerkat.first); AnimalWeights.push_back(Meerkat.second);
	Entry Orangutan{"orangutan", rare};								AnimalNames.push_back(Orangutan.first); AnimalWeights.push_back(Orangutan.second);
	Entry Ox{"ox", rare};											AnimalNames.push_back(Ox.first); AnimalWeights.push_back(Ox.second);
	Entry Pheasant{"pheasant", rare};								AnimalNames.push_back(Pheasant.first); AnimalWeights.push_back(Pheasant.second);
	Entry Porcupine{"porcupine", rare};								AnimalNames.push_back(Porcupine.first); AnimalWeights.push_back(Porcupine.second);
	Entry Pikachu{"pikachu", rare};									AnimalNames.push_back(Pikachu.first); AnimalWeights.push_back(Pikachu.second);
	Entry Stingray{"stingray", rare};								AnimalNames.push_back(Stingray.first); AnimalWeights.push_back(Stingray.second);
	Entry Toad{"toad", rare};										AnimalNames.push_back(Toad.first); AnimalWeights.push_back(Toad.second);
	Entry Wolverine{"wolverine", rare};								AnimalNames.push_back(Wolverine.first); AnimalWeights.push_back(Wolverine.second);

	// OTHER ANIMALS = 0
}