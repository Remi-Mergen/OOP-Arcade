/*
** EPITECH PROJECT, 2023
** B-OOP-400-STG-4-1-arcade-remi.mergen
** File description:
** ACore
*/

#pragma once

#include "../ICore.hpp"

class Core {
    public:
        Core();
        ~Core();
        void mainLoop();
        void setFramerate(int framerate);
        int getFramerate() const;
        void setScore(int score);
        void addScore(int score);
        std::string getPlayerName() const;
        void setPlayerName(std::string name);
        void setDisplayModule(IDisplayModule *module);
        void setGameModule(IGameModule *module);
    private:
        std::string _playerName;
        int _score;
        int _framerate;
};
