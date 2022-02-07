## About the Project
This is an introductionary project to get familiar with the C++ syntax and methodology. It contains a small single-endpoint API endpoint in a docker container. The reason for building this was to familiarize myself with building a dockerized C++ application.

## Getting Started

### Installation
```
git clone https://github.com/henk-vd-brink/cpp-simple_web_server.git
cd cpp-simple_web_server
```

### Run
```
sudo docker-compose up --build
```

See: 'http://localhost:8123/api/greeting'

## Structure
```bash
.
├── README.md
├── api
│   ├── CMakeLists.txt
│   ├── dockerfile
│   └── src
│       └── main.cpp
└── docker-compose.yml
```
