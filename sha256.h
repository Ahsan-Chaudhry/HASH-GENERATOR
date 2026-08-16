#ifndef SHA256_H
#define SHA256_H

#include <string>
#include <vector>
#include <cstdint>

// This function makes SHA-256 hash from data
std::string sha256(const std::vector<uint8_t>& data);

// This function makes SHA-256 hash from a file
std::string sha256File(const std::string& fileName);

#endif