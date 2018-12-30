// Copyright (c) 2018 The GROWX developers
// Copyright (c) 2018 The GROW developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef GROW_ACCUMULATORCHECKPOINTS_JSON_H
#define GROW_ACCUMULATORCHECKPOINTS_JSON_H

#include <string>
std::string GetMainCheckpoints() {
    std::string strMainCheckpoints = "[\n"
            "  {\n"
            "    \"height\": 179,\n"
            "    \"1\": \"3c1\",\n"
            "    \"5\": \"3c1\",\n"
            "    \"10\": \"3c1\",\n"
            "    \"50\": \"3c1\",\n"
            "    \"100\": \"3c1\",\n"
            "    \"500\": \"3c1\",\n"
            "    \"1000\": \"3c1\",\n"
            "    \"5000\": \"3c1\"\n"
            "  }\n"
           // "  {\n"
           // "    \"height\": 5470,\n"
           // "    \"1\": \"3c1\",\n"
           // "    \"5\": \"3c1\",\n"
          //  "    \"10\": \"3c1\",\n"
           // "    \"50\": \"3c1\",\n"
          //  "    \"100\": \"3c1\",\n"
          //  "    \"500\": \"3c1\",\n"
         //   "    \"1000\": \"3c1\",\n"
         //   "    \"5000\": \"3c1\"\n"
         //   "  }\n" 
            
            "]";


    return strMainCheckpoints;
}

std::string GetTestCheckpoints() {
    std::string strTestCheckpoints = "[\n"
            "  {\n"
            "    \"height\": 200,\n"
            "    \"1\": \"3c1\",\n"
            "    \"5\": \"3c1\",\n"
            "    \"10\": \"3c1\",\n"
            "    \"50\": \"3c1\",\n"
            "    \"100\": \"3c1\",\n"
            "    \"500\": \"3c1\",\n"
            "    \"1000\": \"3c1\",\n"
            "    \"5000\": \"3c1\"\n"
            "  },\n"
            "]";
    return strTestCheckpoints;
}

std::string GetRegTestCheckpoints() {
    std::string strRegTestCheckpoints = "[\n"
            "  {\n"
            "    \"height\": 0,\n"
            "    \"1\": \"0\",\n"
            "    \"5\": \"0\",\n"
            "    \"10\": \"0\",\n"
            "    \"50\": \"0\",\n"
            "    \"100\": \"0\",\n"
            "    \"500\": \"0\",\n"
            "    \"1000\": \"0\",\n"
            "    \"5000\": \"0\"\n"
            "  }\n"
            "]";
    return strRegTestCheckpoints;
}

#endif //GROW_ACCUMULATORCHECKPOINTS_JSON_H
