//old syntax
namespace CounterStrikeEngine{
  namespace Graphics{
    namespace Rendering{
      class OpenGLRender{};
    }
  }
}



// c++17 modern Nested namespace
namespace CounterStrikeEngine{

}
namespace CounterStrikeEngine::Graphics{

}
namespace CounterStrikeEngine::Graphics::Rendering{
  class OpenGLRender{

  };
}