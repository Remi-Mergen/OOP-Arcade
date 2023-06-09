/*
** EPITECH PROJECT, 2023
** B-OOP-400-STG-4-1-arcade-remi.mergen
** File description:
** ICore
*/

#pragma once

#include <iostream>
#include "IDisplayModule.hpp"
#include "IGameModule.hpp"

/**
 * @brief Main interface for our core class
 *
 */
class ICore {
    public:
        /**
         * @brief Main core loop, this is the method that we will call and that will handle our main loop.
         *
         */
        virtual void mainLoop() = 0;

        /**
         * @brief Set the Framerate object
         *
         * @param framerate
         */
        virtual void setFramerate(int framerate) = 0;
        /**
         * @brief Get the Framerate object
         *
         * @return int
         */
        virtual int getFramerate() const = 0;
        /**
         * @brief Set the Score object
         *
         * @param score
         */
        virtual void setScore(int score) = 0;
        /**
         * @brief This function will be called when a game is finished or the used exit a game
         * It could probably be smart to implement an observer here but i'm lazy
         * @param score
         */
        virtual void addScore(int score) = 0;
        /**
         * @brief Get the Player Name object
         *
         * @return std::string
         */
        virtual std::string getPlayerName() const = 0;
        /**
         * @brief Set the Player object
         *
         * @param name
         */
        virtual void setPlayerName(std::string name) = 0;
        /**
         * @brief Set the Display Module object
         *
         * @param display
         */
        virtual void setDisplayModule(IDisplayModule *display) = 0;
        /**
         * @brief Set the Game Module object
         *
         * @param game
         */
        virtual void setGameModule(IGameModule *game) = 0;
};
