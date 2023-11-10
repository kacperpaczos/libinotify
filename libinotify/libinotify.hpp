#pragma once
#include <string>
#include <filesystem>
#include <generator>

namespace inotify
{
    class Watcher
    {
    private:
        std::vector<std::filesystem::path> watchList;
    public:
        void excludeFile(const std::string& file);
        void fromFile(const std::string& file);
        void zero();
        void exclude(const std::string& pattern);
        void excludei(const std::string& pattern);
        void recursive();
        void timeout(int seconds);
        void event(const std::string& event);
        void ascending(const std::string& event);
        void descending(const std::string& event);
    };
}