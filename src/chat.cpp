#include "../include/chat.h"
#include <algorithm>

void ChatUI::addMessage(const std::string& player, const std::string& text) {
    if (text.empty()) return;
    m_messages.push_back({player, text});
}

void ChatUI::addPlayer(const std::string& name) {
    if (name.empty()) return;
    if (std::find(m_players.begin(), m_players.end(), name) == m_players.end())
        m_players.push_back(name);
}

void ChatUI::removePlayer(const std::string& name) {
    m_players.erase(
        std::remove(m_players.begin(), m_players.end(), name),
        m_players.end()
    );
}

const std::vector<ChatMessage>& ChatUI::messages() const {
    return m_messages;
}

const std::vector<std::string>& ChatUI::players() const {
    return m_players;
}
