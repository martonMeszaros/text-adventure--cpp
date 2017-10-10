#include <iostream>
#include "../headers/Game.h"

void Game::init()
{
    loadRoomDescriptions();
    loadItemDescriptions();
    loadItemNames();
    loadItemWeights();
}

void Game::loadRoomDescriptions()
{
//    roomDescriptions.emplace_back("long description", "short description");
//    roomDescriptions.emplace_back("long description");
}

void Game::loadItemDescriptions() {
//    itemDescriptions.emplace_back("item description");
}

void Game::loadItemNames() {
//    itemNames.emplace_back("item name");
}

void Game::loadItemWeights() {
//    itemWeights.emplace_back(0);  // item weight
}

void Game::run()
{
    while(!step()){}
}

bool Game::step()
{
    return true;
}
