Blackjack: alert include/resources/Constants.h buildPath build/Blackjack.o build/Card.o build/Dealer.o build/Deck.o build/Game.o build/Player.o
	g++ build/Blackjack.o build/Card.o build/Dealer.o build/Deck.o build/Game.o build/Player.o -o bin/Blackjack

alert:
	@echo "🚧 Building..."


build/Blackjack.o: src/Blackjack.cpp
	g++ -c src/Blackjack.cpp -o build/Blackjack.o

build/Card.o: src/objects/Card.cpp include/objects/Card.hpp
	g++ -c src/objects/Card.cpp -o build/Card.o

build/Dealer.o: src/objects/Dealer.cpp include/objects/Dealer.hpp
	g++ -c src/objects/Dealer.cpp -o build/Dealer.o

build/Deck.o: src/objects/Deck.cpp include/objects/Deck.hpp
	g++ -c src/objects/Deck.cpp -o build/Deck.o

build/Game.o: src/objects/Game.cpp include/objects/Game.hpp
	g++ -c src/objects/Game.cpp -o build/Game.o

build/Player.o: src/objects/Player.cpp include/objects/Player.hpp
	g++ -c src/objects/Player.cpp -o build/Player.o

build/Tool.o: src/resources/Tool.cpp include/resources/Tool.hpp
	g++ -c src/resources/Tool.cpp -o build/Tool.o


buildPath:
	if ! [ -d "build/" ]; then mkdir build; fi
	if ! [ -d "bin/" ]; then mkdir bin; fi


run: Blackjack clean
	@echo "🚀 Executing..."
	@echo ""
	@echo "====================="
	@echo ""
	./bin/Blackjack


clean:
	@echo "🧹 Cleaning..."
	rm build/*.o