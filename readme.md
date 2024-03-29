# TripleX

[![CI][ci_badge]][ci_link]

### Development
> Prerequisite: [Docker](https://www.docker.com/) & [Docker Compose](https://docs.docker.com/compose/)

```bash
docker-compose up -d  # Setup a lightweight (Alpine) running container with g++

docker-compose exec gcc sh -c '\
  g++ main.cpp -o TripleX.out \
  && ./TripleX.out
'

docker-compose down #  to clean up
```


https://user-images.githubusercontent.com/4212119/137528363-cdc0ebde-b70b-4377-9a01-53b1862967a4.mp4



#### Code Style Conventions
- Use [Unreal Engine Code Standards](https://docs.unrealengine.com/4.27/en-US/ProductionPipelines/DevelopmentSetup/CodingStandard/)
- For anything not covered in Unreal Engine Coding Standards use [Google C++ conventions](https://google.github.io/styleguide/cppguide.html) instead. For example local variables should be lowered cased, underscored.

### High Specs
- Simple number puzzle game
- Hacking into a computer lock
- Need to ind a valid combination of codes
- Starts pretty easy, becomes much harder



[ci_badge]: https://github.com/rdok/triple-x-game/actions/workflows/ci.yml/badge.svg
[ci_link]: https://github.com/rdok/triple-x-game/actions/workflows/ci.yml
