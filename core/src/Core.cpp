/*
** EPITECH PROJECT, 2023
** Core.cpp
** File description:
** Core
*/

#include "core/Core.hpp"


Core::Core() {
}

Core::~Core() {
}

void Core::mainLoop() {
}

void Core::setFramerate(int framerate) {
    _framerate = framerate;
}

int Core::getFramerate() const {
    return _framerate;
}

void Core::setScore(int score) {
    _score = score;
}

void Core::addScore(int score) {
    _score += score;
}

std::string Core::getPlayerName() const {
    return _playerName;
}

void Core::setPlayerName(std::string name) {
    _playerName = name;
}

void Core::setDisplayModule(IDisplayModule *module) {
}

void Core::setGameModule(IGameModule *module) {
}
