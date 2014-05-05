/**
 * This file is part of the "recommendify" project
 *   Copyright (c) 2014 Paul Asmuth <paul@paulasmuth.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef _RECOMMENDIFY_RANKEDITEMLIST_H
#define _RECOMMENDIFY_RANKEDITEMLIST_H

#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <unordered_map>

namespace recommendify {

/**
 * A ranked list of items
 */
class RankedItemList {
public:

  /**
   * Increment the score of an item in the ranked list. Will insert the item
   * into the list if it doesn't exist yet
   */
  void incrementItemScore(uint64_t item_key, double value);

protected:

  std::unordered_map<uint64_t, double> data_;

};

}
#endif