#pragma once
#include <string>
#include <vector>

struct ChatMessage {
    std::string player;
    std::string text;
};

class ChatUI {
public:
    void addMessage(const std::string& player, const std::string& text);
    void addPlayer(const std::string& name);
    void removePlayer(const std::string& name);
    const std::vector<ChatMessage>& messages() const;
    const std::vector<std::string>& players() const;

private:
    std::vector<ChatMessage> m_messages;
    std::vector<std::string> m_players;
};
