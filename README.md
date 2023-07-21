# 42cursus - Fract'ol : 
          Computer Graphics Fractals 🔎

## Summary: 
  This project is about creating graphically beautiful fractals.
  
## Foreward:
  The "hydraulic fracturing," is the targeted disruption of geological formations with low permeability by means of injection under high pressure of a fluid to micro-cracking and crack the rock. This fracturing can be performed near the surface or at depth (over 1 km or more than 4 km in the case of shale gas) and from vertical wells, sloped or horizontal.
This relatively old technique (1947), developed for conventional oil deposits, is re- newed by its association with horizontal drilling (developed from 1980). It is the gradual mastery of the economic viability of this association for non-conventional deposits, who guided the recent development of the operation of these: it made available formerly in- accessible resources, or which have been exploited at exorbitant costs and slowly.
It is performed by fracturing the rock by a mechanical "stress" using a fluid injected under high pressure from a surface drilling, to increase the macro porosity and less the micro porosity. The fluid could be the water, a slurry or a technical fluid whose viscosity was adjusted.

This project is not called fract’oil and accordingly has no relation to hydraulic frac- turing.

## Objectives:
  - Create a basic computer graphics project!
  - Use the school graphical library: the MiniLibX! 
    This library was developed internally and includes basic necessary tools to open a window, create images and deal with keyboard and mouse events.
  - Use the mathematical notion of complex numbers.
  - Take a peek at the concept of optimization in computer graphics.
  - Practice event handling.

## Table of Contents
  Watch this First! : 🖐 [fractals](https://www.youtube.com/watch?v=fMBi2ohn_Co) 🖐
1. [Introduction](#introduction)
    - [What is the term fractal?](#fractal)
    - [Types of fractals?](#types-fractal)
    - [Fractal Dimension?](#dimension-fractal)
    - [Fractal Examples?](#examples-fractals)
2. [MiniLibX](#mlx) : 👀 [visit](https://harm-smits.github.io/42docs/libs/minilibx) 👀
   1. [Getting started with the minilib](#minilibx-intro)
      -REFERENCE: ➡️ [mlx-intro](https://aurelienbrabant.fr/blog/getting-started-with-the-minilibx)
   2. [Pixel drawing with the minilibx](#draw-pixel)
      -REFERENCE: ➡️ [mlx-draw-pixel](https://aurelienbrabant.fr/blog/pixel-drawing-with-the-minilibx)
   3. [Managing events with the minilibx](#events)
      -REFERENCE: ➡️ [mlx-events](https://aurelienbrabant.fr/blog/events-with-the-minilibx)     
  
## Introduction
  The term fractal was first used by mathematician Benoit Mandelbrot in 1974. He based it on the Latin word fractus which means "broken" or "fractured".
A fractal is an abstract mathematical object, like a curve or a surface, which pattern remains the same at every scale.
Various natural phenomena – like the romanesco cabbage – have some fractal features.


  ![OIP](https://github.com/myyla/42-fract-ol/assets/96894475/ae4836cc-a6de-46be-af32-2722f8df6781)

### <a name="fractal">What is the term fractal?</a>

 - A simple definition of the term "fractal" is a complex geometric shape or pattern that exhibits self-similarity at different scales. In other words, when you zoom in or out on a fractal, you will see similar patterns repeated at various levels of magnification. Fractals have intricate and often beautiful designs and are commonly used in computer graphics and art. They are generated through mathematical algorithms and have applications in various fields, including computer graphics, simulations, and natural landscapes generation.
- Complex picture created using iteration and single formula
  Ex: Mountains - clouds


### <a name="types-fractal">Types of fractals?</a>

- Self similar: those fractals have parts as scaled down version of entire object.
- Self affine: have parts formed with different scaling parameters in different coordinate directions.
- Invarient: formed with non linear transformations.

### <a name="dimension-fractal">Fractal Dimension?</a> 

 - Fractal dimension is measure of roughness or fragmentation of the object
 - The more jagged is the looking of the object the bigger is the fractal dimension
 - We can calculate fractal Dimension D using some iterative procedures.

### <a name="examples-fractals">Fractal Examples?</a> 

Fractals come in various types, each with its unique characteristics and generation methods. Some of the popular types of fractals include:

- Mandelbrot Set: One of the most famous and iconic fractals, named after mathematician Benoît B. Mandelbrot. It is created by iterating a simple mathematical equation for each point in the complex plane.
  <br>
    ![mandel](https://github.com/myyla/42-fract-ol/assets/96894475/4fa180dd-0071-467c-8aa9-028c6b5b03ad)

  
- Julia Set: Closely related to the Mandelbrot Set, the Julia Set is generated using a similar iterative process, but each point in the complex plane is associated with its own complex number, known as the Julia constant.
  <br>
  ![julia](https://github.com/myyla/42-fract-ol/assets/96894475/29071c4c-e0c3-4799-9c30-b37695eec99f)


- Sierpinski Triangle: This is a classic fractal made up of equilateral triangles. It is generated by recursively removing smaller triangles from a larger one, creating a self-replicating pattern.
  <br>
  ![sierpinski](https://github.com/myyla/42-fract-ol/assets/96894475/d92bc632-4208-4fcf-b6be-d9a6c97130d5)     ![R (1)](https://github.com/myyla/42-fract-ol/assets/96894475/c163c690-bf9e-448f-b91a-5511d0525faf)


- Koch Snowflake: The Koch Snowflake is a fractal constructed by iteratively replacing the middle third of each line segment with an equilateral triangle.
   -> each straight line is replaced with four equal sized lines of scaling factor 1/3
   -> fractol dimension : 1.2619
  <br>
  ![koch snowflake](https://github.com/myyla/42-fract-ol/assets/96894475/525d7ef9-b044-4469-9e41-be6ab67fb2da)    ![OIP (1) (1)](https://github.com/myyla/42-fract-ol/assets/96894475/b342f84c-bf44-43e1-b62f-bac81e784dde) <img width="125" alt="koch" src="https://github.com/myyla/42-fract-ol/assets/96894475/c3a24079-161d-4f4c-9463-30c19f1ffa5e">


- Fractal Trees: Fractal trees are generated by iteratively branching and subdividing branches into smaller ones, forming intricate tree-like structures with self-similarity.
  <br>
  ![tree](https://github.com/myyla/42-fract-ol/assets/96894475/a977c2ec-1806-4ed6-ac43-05f6863e1e05)

- Dragon Curve: The Dragon Curve is a self-replicating fractal generated by a simple recursive process involving folding a sequence of line segments.
  <br>
  ![dragon](https://github.com/myyla/42-fract-ol/assets/96894475/60e6126e-6e9f-439b-8c72-ff60656bf3b3)   ![dragon1](https://github.com/myyla/42-fract-ol/assets/96894475/62b57da0-9248-4182-9e35-92688e725fb3)

- Barnsley Fern: Named after mathematician Michael Barnsley, this fractal produces a visually striking fern-like pattern through a set of transformation rules and probabilities.
  <br>
  ![barnsley (1)](https://github.com/myyla/42-fract-ol/assets/96894475/95f61b90-50e0-4a27-ab65-774be1645b37)

- Sierpinski Carpet: Similar to the Sierpinski Triangle, the Sierpinski Carpet is a fractal pattern generated by iteratively removing smaller squares from a larger square.
  <br>
  ![Sierpinski Carpet (1)](https://github.com/myyla/42-fract-ol/assets/96894475/8b9a0e7a-2777-4ea7-8d96-055b52582572)

- Cantor Set: The Cantor Set is a simple fractal formed by repeatedly removing the middle third of a line segment.
  <br>
 ![cantor](https://github.com/myyla/42-fract-ol/assets/96894475/bdebeaac-742d-4600-9cb0-e5c4ee9f1ac9)

- Menger Sponge: The Menger Sponge is a 3D fractal, resembling a cube with smaller cubes removed from its interior surfaces in a self-similar manner.
  <br>
  ![menger (1)](https://github.com/myyla/42-fract-ol/assets/96894475/e37f18f2-27d5-4f5a-ad2b-399dc0ed353b)

These are just a few examples of the many types of fractals that exist. 

## MiniLibX

###  <a name="minilibx-intro">1. Getting started with the minilib</a> 

#### 1.1. Initialization:
Before we can do anything with the MiniLibX library we must include the <mlx.h> header to access all the functions and we should execute the mlx_init function. This will establish a connection to the correct graphical system and will return a void * which holds the location of our current MLX instance. To initialize MiniLibX one could do the following:

                              #include <mlx.h>
                              int	main(void)
                              {
                              	void	*mlx;
                              
                              	mlx = mlx_init();
                              }
When you run the code, you can’t help but notice that nothing pops up and that nothing is being rendered. Well, this obviously has something to do with the fact that you are not creating a window yet, so let’s try initializing a tiny window which will stay open forever. You can close it by pressing CTRL + C in your terminal. To achieve this, we will simply call the mlx_new_window function, which will return a pointer to the window we have just created. We can give the window height, width and a title. We then will have to call mlx_loop to initiate the window rendering. Let’s create a window with a width of 1920, a height of 1080 and a name of “Hello world!”:

                              #include <mlx.h>
                              
                              int	main(void)
                              {
                              	void	*mlx;
                              	void	*mlx_win;
                              
                              	mlx = mlx_init();
                              	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
                              	mlx_loop(mlx);
                              }

                              
🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡
### Vocabulary u may need before starting the next part:
+ bpp :  🌈
  In computer graphics, bits per pixel (bpp) is a metric that specifies the amount of information used to represent the color of a single pixel in an image. Bpp determines the color depth of the image, i.e., the number of colors that can be represented per pixel.
For example:

          1 bpp: 2 colors (typically black and white).
          8 bpp: 256 colors (commonly used in indexed color images).
          16 bpp: 65,536 colors (often used for low-color images with varying intensity levels).
          24 bpp: 16.7 million colors (commonly used for Truecolor images).
          32 bpp: 16.7 million colors with an additional alpha channel for transparency (commonly used in RGBA images).
  
    ⚠️⚠️ In the context of Minilibx, when you initiate an image using the mlx_new_image() function, you need to specify the bpp of the image. Minilibx supports 32 bpp images, where each pixel is represented using 4 bytes (8 bits per color channel: red, green, blue, and alpha). This allows for a wide range of colors and transparency in the image.

<br>

+ endianness: 📫
          refers to the byte order in multi-byte data. 
 ⚠️⚠️ However, for image data in Minilibx, endianness is typically not a primary concern because the library uses the native endianness of the system.
 ⚠️⚠️ Most modern systems, including macOS (which you mentioned you are using), are little-endian, where the least significant byte is stored at the lowest memory address.
 ⚠️⚠️ Since Minilibx primarily deals with graphical display and rendering, it handles endianness internally to ensure proper interpretation of image data regardless of the system's endianness. You don't need to explicitly handle endianness when working with Minilibx images unless you are performing low-level operations that require byte-level manipulation.
 
 ✍️ In summary, when initiating an image with Minilibx, you usually specify the bpp to determine the color depth of the image. The endianness is managed internally by Minilibx, so you don't need to worry about it when working with image data in the library.
 
🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡🔡


#### 1.2. Writing pixels to a image

Now that we have basic window management, we can get started with pushing pixels to the window. How you decide to get these pixels is up to you, however some optimized ways of doing this will be discussed. First of all, we should take into account that the mlx_pixel_put function is very, very slow. This is because it tries to push the pixel instantly to the window (without waiting for the frame to be entirely rendered). Because of this sole reason, we will have to buffer all of our pixels to a image, which we will then push to the window. All of this sounds very complicated, but trust me, its not too bad.

First of all, we should start by understanding what type of image mlx requires. If we initiate an image, we will have to pass a few pointers to which it will write a few important variables. The first one is the bpp, also called the bits per pixel. As the pixels are basically ints, these usually are 4 bytes, however, this can differ if we are dealing with a small endian (which means we most likely are on a remote display and only have 8 bit colors).

Now we can initialize the image with size 1920×1080 as follows:

                              #include <mlx.h>
                              
                              int	main(void)
                              {
                              	void	*img;
                              	void	*mlx;
                              
                              	mlx = mlx_init();
                              	img = mlx_new_image(mlx, 1920, 1080);
                              }
                              
That wasn’t too bad, was it? Now, we have an image but how exactly do we write pixels to this? For this we need to get the memory address on which we will mutate the bytes accordingly. We retrieve this address as follows:

                              #include <mlx.h>
                              
                              typedef struct	s_data {
                              	void	*img;
                              	char	*addr;
                              	int		bits_per_pixel;
                              	int		line_length;
                              	int		endian;
                              }				t_data;
                              
                              int	main(void)
                              {
                              	void	*mlx;
                              	t_data	img;
                              
                              	mlx = mlx_init();
                              	img.img = mlx_new_image(mlx, 1920, 1080);
                              
                              	/*
                              	** After creating an image, we can call `mlx_get_data_addr`, we pass
                              	** `bits_per_pixel`, `line_length`, and `endian` by reference. These will
                              	** then be set accordingly for the *current* data address.
                              	*/
                              	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
                              								&img.endian);
                              }
                              
Notice how we pass the bits_per_pixel, line_length and endian variables by reference? These will be set accordingly by MiniLibX as per described above.

Now we have the image address, but still no pixels. Before we start with this, we must understand that the bytes are not aligned, this means that the line_length differs from the actual window width. We therefore should ALWAYS calculate the memory offset using the line length set by mlx_get_data_addr.

We can calculate it very easily by using the following formula:

                                        int offset = (y * line_length + x * (bits_per_pixel / 8));
                                        
EXPLICATION➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️<br>
Why we use that formula ??

 allows you to calculate the memory offset for a specific pixel at coordinates (x, y) in the image, considering the padding and alignment.

Hœere's why it's important:

Padding and Alignment: The line_length accounts for any additional bytes (padding) that might be present between consecutive rows (lines) in the image. This ensures that each row starts at the correct memory address and aligns properly with the system's requirements.

Avoiding Undefined Behavior: If you were to calculate the memory offset using the window width instead of the line_length, you might end up accessing invalid memory locations, leading to undefined behavior and potential crashes in your program. Using the correct line_length ensures you access the image data correctly and safely.

By always calculating the memory offset using the line_length provided by mlx_get_data_addr, you ensure that you work with pixel data in a way that respects the image's actual layout in memory, regardless of any padding or alignment. This is crucial when directly accessing pixel data for manipulation or pixel-level rendering in your graphics application.<br>
➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️➡️<br>


Now that we know where to write, it becomes very easy to write a function that will mimic the behaviour of mlx_pixel_put but will simply be many times faster:

                                        typedef struct	s_data {
                                        	void	*img;
                                        	char	*addr;
                                        	int		bits_per_pixel;
                                        	int		line_length;
                                        	int		endian;
                                        }				t_data;
                                        
                                        void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
                                        {
                                        	char	*dst;
                                        
                                        	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
                                        	*(unsigned int*)dst = color;
                                        }
                                        
Note that this will cause an issue. Because an image is represented in real time in a window, changing the same image will cause a bunch of screen-tearing when writing to it. You should therefore create two or more images to hold your frames temporarily. You can then write to a temporary image, so that you don’t have to write to the currently presented image.

#### 1.2. Pushing images to a window

Now that we can finally create our image, we should also push it to the window, so that we can actually see it. This is pretty straight forward, let’s take a look at how we can write a red pixel at (5,5) and put it to our window:
                    
                    #include <mlx.h>
                    
                    typedef struct	s_data {
                    	void	*img;
                    	char	*addr;
                    	int		bits_per_pixel;
                    	int		line_length;
                    	int		endian;
                    }				t_data;
                    
                    int	main(void)
                    {
                    	void	*mlx;
                    	void	*mlx_win;
                    	t_data	img;
                    
                    	mlx = mlx_init();
                    	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
                    	img.img = mlx_new_image(mlx, 1920, 1080);
                    	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
                    								&img.endian);
                    	my_mlx_pixel_put(&img, 5, 5, 0x00FF0000);
                    	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
                    	mlx_loop(mlx);
                    }
⚠️ Note that 0x00FF0000 is the hex representation of ARGB(0,255,0,0).


### <a name="draw-pixel">2. Pixel drawing with the minilibx</a> 


### <a name="events">3. Managing events with the minilibx</a>



  



