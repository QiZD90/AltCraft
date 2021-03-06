#include "Block.hpp"

Block::~Block() {}

Block::Block(unsigned short id, unsigned char state,
	         unsigned char light, unsigned char sky)
        : id(id), state(state), light(light), sky (sky) {}

Block::Block() : id(0), state(0), light(0), sky(0) {}

bool operator==(const BlockId& lhs, const BlockId &rhs) {
    return (lhs.id == rhs.id) && (lhs.state == rhs.state);
}

bool operator<(const BlockId& lhs, const BlockId &rhs) {
    return (lhs.id < rhs.id);
}