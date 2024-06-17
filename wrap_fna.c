#include "FNA3D/include/FNA3D.h"
#include <emscripten/proxying.h>
#include <emscripten/threading.h>
#include <assert.h>
typedef struct {
	;
	uint32_t *WRAP_RET;
} WRAP__struct_FNA3D_LinkedVersion;
void WRAP__MAIN__FNA3D_LinkedVersion(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_LinkedVersion *wrap_struct = (WRAP__struct_FNA3D_LinkedVersion*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_LinkedVersion(
	);
}
uint32_t WRAP_FNA3D_LinkedVersion()
{
	// $func: `uint32_t FNA3D_LinkedVersion()`
	// $ret: `uint32_t`
	// $name: `FNA3D_LinkedVersion`
	// $args: ``
	// $argsargs:
	// $argc: `1`
	//
	// return
	uint32_t wrap_ret;
	WRAP__struct_FNA3D_LinkedVersion wrap_struct = {
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_LinkedVersion, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_LinkedVersion')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	FNA3D_LogFunc info;
	FNA3D_LogFunc warn;
	FNA3D_LogFunc error;
} WRAP__struct_FNA3D_HookLogFunctions;
void WRAP__MAIN__FNA3D_HookLogFunctions(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_HookLogFunctions *wrap_struct = (WRAP__struct_FNA3D_HookLogFunctions*)wrap_struct_ptr;
	FNA3D_HookLogFunctions(
		wrap_struct->info,
		wrap_struct->warn,
		wrap_struct->error
	);
}
void WRAP_FNA3D_HookLogFunctions(FNA3D_LogFunc info,FNA3D_LogFunc warn,FNA3D_LogFunc error)
{
	// $func: `void FNA3D_HookLogFunctions(FNA3D_LogFunc info,FNA3D_LogFunc warn,FNA3D_LogFunc error)`
	// $ret: `void`
	// $name: `FNA3D_HookLogFunctions`
	// $args: `FNA3D_LogFunc info,FNA3D_LogFunc warn,FNA3D_LogFunc error`
	// $argsargs: `info,warn,error`
	// $argc: `3`
	//
	// return FNA3D_HookLogFunctions(info,warn,error);
	WRAP__struct_FNA3D_HookLogFunctions wrap_struct = {
		.info = info,
		.warn = warn,
		.error = error,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_HookLogFunctions, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_HookLogFunctions')");
		assert(0);
	}
}

typedef struct {
	;
	uint32_t *WRAP_RET;
} WRAP__struct_FNA3D_PrepareWindowAttributes;
void WRAP__MAIN__FNA3D_PrepareWindowAttributes(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_PrepareWindowAttributes *wrap_struct = (WRAP__struct_FNA3D_PrepareWindowAttributes*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_PrepareWindowAttributes(
	);
}
uint32_t WRAP_FNA3D_PrepareWindowAttributes()
{
	// $func: `uint32_t FNA3D_PrepareWindowAttributes()`
	// $ret: `uint32_t`
	// $name: `FNA3D_PrepareWindowAttributes`
	// $args: ``
	// $argsargs:
	// $argc: `1`
	//
	// return
	uint32_t wrap_ret;
	WRAP__struct_FNA3D_PrepareWindowAttributes wrap_struct = {
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_PrepareWindowAttributes, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_PrepareWindowAttributes')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	void* window;
	int32_t *w;
	int32_t *h;
} WRAP__struct_FNA3D_GetDrawableSize;
void WRAP__MAIN__FNA3D_GetDrawableSize(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_GetDrawableSize *wrap_struct = (WRAP__struct_FNA3D_GetDrawableSize*)wrap_struct_ptr;
	FNA3D_GetDrawableSize(
		wrap_struct->void*window,
		wrap_struct->w,
		wrap_struct->h
	);
}
void WRAP_FNA3D_GetDrawableSize(void* window, int32_t *w, int32_t *h)
{
	// $func: `void FNA3D_GetDrawableSize(void* window, int32_t *w, int32_t *h)`
	// $ret: `void`
	// $name: `FNA3D_GetDrawableSize`
	// $args: `void* window, int32_t *w, int32_t *h`
	// $argsargs: `void*window,w,h`
	// $argc: `3`
	//
	// return FNA3D_GetDrawableSize(void*window,w,h);
	WRAP__struct_FNA3D_GetDrawableSize wrap_struct = {
		.void*window = void*window,
		.w = w,
		.h = h,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_GetDrawableSize, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_GetDrawableSize')");
		assert(0);
	}
}

typedef struct {
	FNA3D_PresentationParameters *presentationParameters;
	uint8_t debugMode;
	FNA3D_Device* *WRAP_RET;
} WRAP__struct_FNA3D_CreateDevice;
void WRAP__MAIN__FNA3D_CreateDevice(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_CreateDevice *wrap_struct = (WRAP__struct_FNA3D_CreateDevice*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_CreateDevice(
		wrap_struct->presentationParameters,
		wrap_struct->debugMode
	);
}
FNA3D_Device* WRAP_FNA3D_CreateDevice(FNA3D_PresentationParameters *presentationParameters,uint8_t debugMode)
{
	// $func: `FNA3D_Device* FNA3D_CreateDevice(FNA3D_PresentationParameters *presentationParameters,uint8_t debugMode)`
	// $ret: `FNA3D_Device*`
	// $name: `FNA3D_CreateDevice`
	// $args: `FNA3D_PresentationParameters *presentationParameters,uint8_t debugMode`
	// $argsargs: `presentationParameters,debugMode`
	// $argc: `2`
	//
	// return FNA3D_CreateDevice(presentationParameters,debugMode);
	FNA3D_Device* wrap_ret;
	WRAP__struct_FNA3D_CreateDevice wrap_struct = {
		.presentationParameters = presentationParameters,
		.debugMode = debugMode,
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_CreateDevice, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_CreateDevice')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	FNA3D_Device *device;
} WRAP__struct_FNA3D_DestroyDevice;
void WRAP__MAIN__FNA3D_DestroyDevice(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_DestroyDevice *wrap_struct = (WRAP__struct_FNA3D_DestroyDevice*)wrap_struct_ptr;
	FNA3D_DestroyDevice(
		wrap_struct->device
	);
}
void WRAP_FNA3D_DestroyDevice(FNA3D_Device *device)
{
	// $func: `void FNA3D_DestroyDevice(FNA3D_Device *device)`
	// $ret: `void`
	// $name: `FNA3D_DestroyDevice`
	// $args: `FNA3D_Device *device`
	// $argsargs: `device`
	// $argc: `1`
	//
	// return FNA3D_DestroyDevice(device);
	WRAP__struct_FNA3D_DestroyDevice wrap_struct = {
		.device = device,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_DestroyDevice, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_DestroyDevice')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Rect *sourceRectangle;
	FNA3D_Rect *destinationRectangle;
	void* overrideWindowHandle;
} WRAP__struct_FNA3D_SwapBuffers;
void WRAP__MAIN__FNA3D_SwapBuffers(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_SwapBuffers *wrap_struct = (WRAP__struct_FNA3D_SwapBuffers*)wrap_struct_ptr;
	FNA3D_SwapBuffers(
		wrap_struct->device,
		wrap_struct->sourceRectangle,
		wrap_struct->destinationRectangle,
		wrap_struct->void*overrideWindowHandle
	);
}
void WRAP_FNA3D_SwapBuffers(FNA3D_Device *device,FNA3D_Rect *sourceRectangle,FNA3D_Rect *destinationRectangle,void* overrideWindowHandle)
{
	// $func: `void FNA3D_SwapBuffers(FNA3D_Device *device,FNA3D_Rect *sourceRectangle,FNA3D_Rect *destinationRectangle,void* overrideWindowHandle)`
	// $ret: `void`
	// $name: `FNA3D_SwapBuffers`
	// $args: `FNA3D_Device *device,FNA3D_Rect *sourceRectangle,FNA3D_Rect *destinationRectangle,void* overrideWindowHandle`
	// $argsargs: `device,sourceRectangle,destinationRectangle,void*overrideWindowHandle`
	// $argc: `4`
	//
	// return FNA3D_SwapBuffers(device,sourceRectangle,destinationRectangle,void*overrideWindowHandle);
	WRAP__struct_FNA3D_SwapBuffers wrap_struct = {
		.device = device,
		.sourceRectangle = sourceRectangle,
		.destinationRectangle = destinationRectangle,
		.void*overrideWindowHandle = void*overrideWindowHandle,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_SwapBuffers, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_SwapBuffers')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_ClearOptions options;
	FNA3D_Vec4 *color;
	float depth;
	int32_t stencil;
} WRAP__struct_FNA3D_Clear;
void WRAP__MAIN__FNA3D_Clear(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_Clear *wrap_struct = (WRAP__struct_FNA3D_Clear*)wrap_struct_ptr;
	FNA3D_Clear(
		wrap_struct->device,
		wrap_struct->options,
		wrap_struct->color,
		wrap_struct->depth,
		wrap_struct->stencil
	);
}
void WRAP_FNA3D_Clear(FNA3D_Device *device,FNA3D_ClearOptions options,FNA3D_Vec4 *color,float depth,int32_t stencil)
{
	// $func: `void FNA3D_Clear(FNA3D_Device *device,FNA3D_ClearOptions options,FNA3D_Vec4 *color,float depth,int32_t stencil)`
	// $ret: `void`
	// $name: `FNA3D_Clear`
	// $args: `FNA3D_Device *device,FNA3D_ClearOptions options,FNA3D_Vec4 *color,float depth,int32_t stencil`
	// $argsargs: `device,options,color,depth,stencil`
	// $argc: `5`
	//
	// return FNA3D_Clear(device,options,color,depth,stencil);
	WRAP__struct_FNA3D_Clear wrap_struct = {
		.device = device,
		.options = options,
		.color = color,
		.depth = depth,
		.stencil = stencil,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_Clear, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_Clear')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_PrimitiveType primitiveType;
	int32_t baseVertex;
	int32_t minVertexIndex;
	int32_t numVertices;
	int32_t startIndex;
	int32_t primitiveCount;
	FNA3D_Buffer *indices;
	FNA3D_IndexElementSize indexElementSize;
} WRAP__struct_FNA3D_DrawIndexedPrimitives;
void WRAP__MAIN__FNA3D_DrawIndexedPrimitives(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_DrawIndexedPrimitives *wrap_struct = (WRAP__struct_FNA3D_DrawIndexedPrimitives*)wrap_struct_ptr;
	FNA3D_DrawIndexedPrimitives(
		wrap_struct->device,
		wrap_struct->primitiveType,
		wrap_struct->baseVertex,
		wrap_struct->minVertexIndex,
		wrap_struct->numVertices,
		wrap_struct->startIndex,
		wrap_struct->primitiveCount,
		wrap_struct->indices,
		wrap_struct->indexElementSize
	);
}
void WRAP_FNA3D_DrawIndexedPrimitives(FNA3D_Device *device,FNA3D_PrimitiveType primitiveType,int32_t baseVertex,int32_t minVertexIndex,int32_t numVertices,int32_t startIndex,int32_t primitiveCount,FNA3D_Buffer *indices,FNA3D_IndexElementSize indexElementSize)
{
	// $func: `void FNA3D_DrawIndexedPrimitives(FNA3D_Device *device,FNA3D_PrimitiveType primitiveType,int32_t baseVertex,int32_t minVertexIndex,int32_t numVertices,int32_t startIndex,int32_t primitiveCount,FNA3D_Buffer *indices,FNA3D_IndexElementSize indexElementSize)`
	// $ret: `void`
	// $name: `FNA3D_DrawIndexedPrimitives`
	// $args: `FNA3D_Device *device,FNA3D_PrimitiveType primitiveType,int32_t baseVertex,int32_t minVertexIndex,int32_t numVertices,int32_t startIndex,int32_t primitiveCount,FNA3D_Buffer *indices,FNA3D_IndexElementSize indexElementSize`
	// $argsargs: `device,primitiveType,baseVertex,minVertexIndex,numVertices,startIndex,primitiveCount,indices,indexElementSize`
	// $argc: `9`
	//
	// return FNA3D_DrawIndexedPrimitives(device,primitiveType,baseVertex,minVertexIndex,numVertices,startIndex,primitiveCount,indices,indexElementSize);
	WRAP__struct_FNA3D_DrawIndexedPrimitives wrap_struct = {
		.device = device,
		.primitiveType = primitiveType,
		.baseVertex = baseVertex,
		.minVertexIndex = minVertexIndex,
		.numVertices = numVertices,
		.startIndex = startIndex,
		.primitiveCount = primitiveCount,
		.indices = indices,
		.indexElementSize = indexElementSize,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_DrawIndexedPrimitives, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_DrawIndexedPrimitives')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_PrimitiveType primitiveType;
	int32_t baseVertex;
	int32_t minVertexIndex;
	int32_t numVertices;
	int32_t startIndex;
	int32_t primitiveCount;
	int32_t instanceCount;
	FNA3D_Buffer *indices;
	FNA3D_IndexElementSize indexElementSize;
} WRAP__struct_FNA3D_DrawInstancedPrimitives;
void WRAP__MAIN__FNA3D_DrawInstancedPrimitives(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_DrawInstancedPrimitives *wrap_struct = (WRAP__struct_FNA3D_DrawInstancedPrimitives*)wrap_struct_ptr;
	FNA3D_DrawInstancedPrimitives(
		wrap_struct->device,
		wrap_struct->primitiveType,
		wrap_struct->baseVertex,
		wrap_struct->minVertexIndex,
		wrap_struct->numVertices,
		wrap_struct->startIndex,
		wrap_struct->primitiveCount,
		wrap_struct->instanceCount,
		wrap_struct->indices,
		wrap_struct->indexElementSize
	);
}
void WRAP_FNA3D_DrawInstancedPrimitives(FNA3D_Device *device,FNA3D_PrimitiveType primitiveType,int32_t baseVertex,int32_t minVertexIndex,int32_t numVertices,int32_t startIndex,int32_t primitiveCount,int32_t instanceCount,FNA3D_Buffer *indices,FNA3D_IndexElementSize indexElementSize)
{
	// $func: `void FNA3D_DrawInstancedPrimitives(FNA3D_Device *device,FNA3D_PrimitiveType primitiveType,int32_t baseVertex,int32_t minVertexIndex,int32_t numVertices,int32_t startIndex,int32_t primitiveCount,int32_t instanceCount,FNA3D_Buffer *indices,FNA3D_IndexElementSize indexElementSize)`
	// $ret: `void`
	// $name: `FNA3D_DrawInstancedPrimitives`
	// $args: `FNA3D_Device *device,FNA3D_PrimitiveType primitiveType,int32_t baseVertex,int32_t minVertexIndex,int32_t numVertices,int32_t startIndex,int32_t primitiveCount,int32_t instanceCount,FNA3D_Buffer *indices,FNA3D_IndexElementSize indexElementSize`
	// $argsargs: `device,primitiveType,baseVertex,minVertexIndex,numVertices,startIndex,primitiveCount,instanceCount,indices,indexElementSize`
	// $argc: `10`
	//
	// return FNA3D_DrawInstancedPrimitives(device,primitiveType,baseVertex,minVertexIndex,numVertices,startIndex,primitiveCount,instanceCount,indices,indexElementSize);
	WRAP__struct_FNA3D_DrawInstancedPrimitives wrap_struct = {
		.device = device,
		.primitiveType = primitiveType,
		.baseVertex = baseVertex,
		.minVertexIndex = minVertexIndex,
		.numVertices = numVertices,
		.startIndex = startIndex,
		.primitiveCount = primitiveCount,
		.instanceCount = instanceCount,
		.indices = indices,
		.indexElementSize = indexElementSize,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_DrawInstancedPrimitives, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_DrawInstancedPrimitives')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_PrimitiveType primitiveType;
	int32_t vertexStart;
	int32_t primitiveCount;
} WRAP__struct_FNA3D_DrawPrimitives;
void WRAP__MAIN__FNA3D_DrawPrimitives(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_DrawPrimitives *wrap_struct = (WRAP__struct_FNA3D_DrawPrimitives*)wrap_struct_ptr;
	FNA3D_DrawPrimitives(
		wrap_struct->device,
		wrap_struct->primitiveType,
		wrap_struct->vertexStart,
		wrap_struct->primitiveCount
	);
}
void WRAP_FNA3D_DrawPrimitives(FNA3D_Device *device,FNA3D_PrimitiveType primitiveType,int32_t vertexStart,int32_t primitiveCount)
{
	// $func: `void FNA3D_DrawPrimitives(FNA3D_Device *device,FNA3D_PrimitiveType primitiveType,int32_t vertexStart,int32_t primitiveCount)`
	// $ret: `void`
	// $name: `FNA3D_DrawPrimitives`
	// $args: `FNA3D_Device *device,FNA3D_PrimitiveType primitiveType,int32_t vertexStart,int32_t primitiveCount`
	// $argsargs: `device,primitiveType,vertexStart,primitiveCount`
	// $argc: `4`
	//
	// return FNA3D_DrawPrimitives(device,primitiveType,vertexStart,primitiveCount);
	WRAP__struct_FNA3D_DrawPrimitives wrap_struct = {
		.device = device,
		.primitiveType = primitiveType,
		.vertexStart = vertexStart,
		.primitiveCount = primitiveCount,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_DrawPrimitives, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_DrawPrimitives')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Viewport *viewport;
} WRAP__struct_FNA3D_SetViewport;
void WRAP__MAIN__FNA3D_SetViewport(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_SetViewport *wrap_struct = (WRAP__struct_FNA3D_SetViewport*)wrap_struct_ptr;
	FNA3D_SetViewport(
		wrap_struct->device,
		wrap_struct->viewport
	);
}
void WRAP_FNA3D_SetViewport(FNA3D_Device *device, FNA3D_Viewport *viewport)
{
	// $func: `void FNA3D_SetViewport(FNA3D_Device *device, FNA3D_Viewport *viewport)`
	// $ret: `void`
	// $name: `FNA3D_SetViewport`
	// $args: `FNA3D_Device *device, FNA3D_Viewport *viewport`
	// $argsargs: `device,viewport`
	// $argc: `2`
	//
	// return FNA3D_SetViewport(device,viewport);
	WRAP__struct_FNA3D_SetViewport wrap_struct = {
		.device = device,
		.viewport = viewport,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_SetViewport, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_SetViewport')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Rect *scissor;
} WRAP__struct_FNA3D_SetScissorRect;
void WRAP__MAIN__FNA3D_SetScissorRect(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_SetScissorRect *wrap_struct = (WRAP__struct_FNA3D_SetScissorRect*)wrap_struct_ptr;
	FNA3D_SetScissorRect(
		wrap_struct->device,
		wrap_struct->scissor
	);
}
void WRAP_FNA3D_SetScissorRect(FNA3D_Device *device, FNA3D_Rect *scissor)
{
	// $func: `void FNA3D_SetScissorRect(FNA3D_Device *device, FNA3D_Rect *scissor)`
	// $ret: `void`
	// $name: `FNA3D_SetScissorRect`
	// $args: `FNA3D_Device *device, FNA3D_Rect *scissor`
	// $argsargs: `device,scissor`
	// $argc: `2`
	//
	// return FNA3D_SetScissorRect(device,scissor);
	WRAP__struct_FNA3D_SetScissorRect wrap_struct = {
		.device = device,
		.scissor = scissor,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_SetScissorRect, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_SetScissorRect')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Color *blendFactor;
} WRAP__struct_FNA3D_GetBlendFactor;
void WRAP__MAIN__FNA3D_GetBlendFactor(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_GetBlendFactor *wrap_struct = (WRAP__struct_FNA3D_GetBlendFactor*)wrap_struct_ptr;
	FNA3D_GetBlendFactor(
		wrap_struct->device,
		wrap_struct->blendFactor
	);
}
void WRAP_FNA3D_GetBlendFactor(FNA3D_Device *device,FNA3D_Color *blendFactor)
{
	// $func: `void FNA3D_GetBlendFactor(FNA3D_Device *device,FNA3D_Color *blendFactor)`
	// $ret: `void`
	// $name: `FNA3D_GetBlendFactor`
	// $args: `FNA3D_Device *device,FNA3D_Color *blendFactor`
	// $argsargs: `device,blendFactor`
	// $argc: `2`
	//
	// return FNA3D_GetBlendFactor(device,blendFactor);
	WRAP__struct_FNA3D_GetBlendFactor wrap_struct = {
		.device = device,
		.blendFactor = blendFactor,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_GetBlendFactor, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_GetBlendFactor')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Color *blendFactor;
} WRAP__struct_FNA3D_SetBlendFactor;
void WRAP__MAIN__FNA3D_SetBlendFactor(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_SetBlendFactor *wrap_struct = (WRAP__struct_FNA3D_SetBlendFactor*)wrap_struct_ptr;
	FNA3D_SetBlendFactor(
		wrap_struct->device,
		wrap_struct->blendFactor
	);
}
void WRAP_FNA3D_SetBlendFactor(FNA3D_Device *device,FNA3D_Color *blendFactor)
{
	// $func: `void FNA3D_SetBlendFactor(FNA3D_Device *device,FNA3D_Color *blendFactor)`
	// $ret: `void`
	// $name: `FNA3D_SetBlendFactor`
	// $args: `FNA3D_Device *device,FNA3D_Color *blendFactor`
	// $argsargs: `device,blendFactor`
	// $argc: `2`
	//
	// return FNA3D_SetBlendFactor(device,blendFactor);
	WRAP__struct_FNA3D_SetBlendFactor wrap_struct = {
		.device = device,
		.blendFactor = blendFactor,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_SetBlendFactor, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_SetBlendFactor')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	int32_t *WRAP_RET;
} WRAP__struct_FNA3D_GetMultiSampleMask;
void WRAP__MAIN__FNA3D_GetMultiSampleMask(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_GetMultiSampleMask *wrap_struct = (WRAP__struct_FNA3D_GetMultiSampleMask*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_GetMultiSampleMask(
		wrap_struct->device
	);
}
int32_t WRAP_FNA3D_GetMultiSampleMask(FNA3D_Device *device)
{
	// $func: `int32_t FNA3D_GetMultiSampleMask(FNA3D_Device *device)`
	// $ret: `int32_t`
	// $name: `FNA3D_GetMultiSampleMask`
	// $args: `FNA3D_Device *device`
	// $argsargs: `device`
	// $argc: `1`
	//
	// return FNA3D_GetMultiSampleMask(device);
	int32_t wrap_ret;
	WRAP__struct_FNA3D_GetMultiSampleMask wrap_struct = {
		.device = device,
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_GetMultiSampleMask, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_GetMultiSampleMask')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	FNA3D_Device *device;
	int32_t mask;
} WRAP__struct_FNA3D_SetMultiSampleMask;
void WRAP__MAIN__FNA3D_SetMultiSampleMask(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_SetMultiSampleMask *wrap_struct = (WRAP__struct_FNA3D_SetMultiSampleMask*)wrap_struct_ptr;
	FNA3D_SetMultiSampleMask(
		wrap_struct->device,
		wrap_struct->mask
	);
}
void WRAP_FNA3D_SetMultiSampleMask(FNA3D_Device *device, int32_t mask)
{
	// $func: `void FNA3D_SetMultiSampleMask(FNA3D_Device *device, int32_t mask)`
	// $ret: `void`
	// $name: `FNA3D_SetMultiSampleMask`
	// $args: `FNA3D_Device *device, int32_t mask`
	// $argsargs: `device,mask`
	// $argc: `2`
	//
	// return FNA3D_SetMultiSampleMask(device,mask);
	WRAP__struct_FNA3D_SetMultiSampleMask wrap_struct = {
		.device = device,
		.mask = mask,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_SetMultiSampleMask, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_SetMultiSampleMask')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	int32_t *WRAP_RET;
} WRAP__struct_FNA3D_GetReferenceStencil;
void WRAP__MAIN__FNA3D_GetReferenceStencil(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_GetReferenceStencil *wrap_struct = (WRAP__struct_FNA3D_GetReferenceStencil*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_GetReferenceStencil(
		wrap_struct->device
	);
}
int32_t WRAP_FNA3D_GetReferenceStencil(FNA3D_Device *device)
{
	// $func: `int32_t FNA3D_GetReferenceStencil(FNA3D_Device *device)`
	// $ret: `int32_t`
	// $name: `FNA3D_GetReferenceStencil`
	// $args: `FNA3D_Device *device`
	// $argsargs: `device`
	// $argc: `1`
	//
	// return FNA3D_GetReferenceStencil(device);
	int32_t wrap_ret;
	WRAP__struct_FNA3D_GetReferenceStencil wrap_struct = {
		.device = device,
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_GetReferenceStencil, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_GetReferenceStencil')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	FNA3D_Device *device;
	int32_t ref;
} WRAP__struct_FNA3D_SetReferenceStencil;
void WRAP__MAIN__FNA3D_SetReferenceStencil(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_SetReferenceStencil *wrap_struct = (WRAP__struct_FNA3D_SetReferenceStencil*)wrap_struct_ptr;
	FNA3D_SetReferenceStencil(
		wrap_struct->device,
		wrap_struct->ref
	);
}
void WRAP_FNA3D_SetReferenceStencil(FNA3D_Device *device, int32_t ref)
{
	// $func: `void FNA3D_SetReferenceStencil(FNA3D_Device *device, int32_t ref)`
	// $ret: `void`
	// $name: `FNA3D_SetReferenceStencil`
	// $args: `FNA3D_Device *device, int32_t ref`
	// $argsargs: `device,ref`
	// $argc: `2`
	//
	// return FNA3D_SetReferenceStencil(device,ref);
	WRAP__struct_FNA3D_SetReferenceStencil wrap_struct = {
		.device = device,
		.ref = ref,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_SetReferenceStencil, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_SetReferenceStencil')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_BlendState *blendState;
} WRAP__struct_FNA3D_SetBlendState;
void WRAP__MAIN__FNA3D_SetBlendState(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_SetBlendState *wrap_struct = (WRAP__struct_FNA3D_SetBlendState*)wrap_struct_ptr;
	FNA3D_SetBlendState(
		wrap_struct->device,
		wrap_struct->blendState
	);
}
void WRAP_FNA3D_SetBlendState(FNA3D_Device *device,FNA3D_BlendState *blendState)
{
	// $func: `void FNA3D_SetBlendState(FNA3D_Device *device,FNA3D_BlendState *blendState)`
	// $ret: `void`
	// $name: `FNA3D_SetBlendState`
	// $args: `FNA3D_Device *device,FNA3D_BlendState *blendState`
	// $argsargs: `device,blendState`
	// $argc: `2`
	//
	// return FNA3D_SetBlendState(device,blendState);
	WRAP__struct_FNA3D_SetBlendState wrap_struct = {
		.device = device,
		.blendState = blendState,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_SetBlendState, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_SetBlendState')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_DepthStencilState *depthStencilState;
} WRAP__struct_FNA3D_SetDepthStencilState;
void WRAP__MAIN__FNA3D_SetDepthStencilState(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_SetDepthStencilState *wrap_struct = (WRAP__struct_FNA3D_SetDepthStencilState*)wrap_struct_ptr;
	FNA3D_SetDepthStencilState(
		wrap_struct->device,
		wrap_struct->depthStencilState
	);
}
void WRAP_FNA3D_SetDepthStencilState(FNA3D_Device *device,FNA3D_DepthStencilState *depthStencilState)
{
	// $func: `void FNA3D_SetDepthStencilState(FNA3D_Device *device,FNA3D_DepthStencilState *depthStencilState)`
	// $ret: `void`
	// $name: `FNA3D_SetDepthStencilState`
	// $args: `FNA3D_Device *device,FNA3D_DepthStencilState *depthStencilState`
	// $argsargs: `device,depthStencilState`
	// $argc: `2`
	//
	// return FNA3D_SetDepthStencilState(device,depthStencilState);
	WRAP__struct_FNA3D_SetDepthStencilState wrap_struct = {
		.device = device,
		.depthStencilState = depthStencilState,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_SetDepthStencilState, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_SetDepthStencilState')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_RasterizerState *rasterizerState;
} WRAP__struct_FNA3D_ApplyRasterizerState;
void WRAP__MAIN__FNA3D_ApplyRasterizerState(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_ApplyRasterizerState *wrap_struct = (WRAP__struct_FNA3D_ApplyRasterizerState*)wrap_struct_ptr;
	FNA3D_ApplyRasterizerState(
		wrap_struct->device,
		wrap_struct->rasterizerState
	);
}
void WRAP_FNA3D_ApplyRasterizerState(FNA3D_Device *device,FNA3D_RasterizerState *rasterizerState)
{
	// $func: `void FNA3D_ApplyRasterizerState(FNA3D_Device *device,FNA3D_RasterizerState *rasterizerState)`
	// $ret: `void`
	// $name: `FNA3D_ApplyRasterizerState`
	// $args: `FNA3D_Device *device,FNA3D_RasterizerState *rasterizerState`
	// $argsargs: `device,rasterizerState`
	// $argc: `2`
	//
	// return FNA3D_ApplyRasterizerState(device,rasterizerState);
	WRAP__struct_FNA3D_ApplyRasterizerState wrap_struct = {
		.device = device,
		.rasterizerState = rasterizerState,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_ApplyRasterizerState, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_ApplyRasterizerState')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	int32_t index;
	FNA3D_Texture *texture;
	FNA3D_SamplerState *sampler;
} WRAP__struct_FNA3D_VerifySampler;
void WRAP__MAIN__FNA3D_VerifySampler(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_VerifySampler *wrap_struct = (WRAP__struct_FNA3D_VerifySampler*)wrap_struct_ptr;
	FNA3D_VerifySampler(
		wrap_struct->device,
		wrap_struct->index,
		wrap_struct->texture,
		wrap_struct->sampler
	);
}
void WRAP_FNA3D_VerifySampler(FNA3D_Device *device,int32_t index,FNA3D_Texture *texture,FNA3D_SamplerState *sampler)
{
	// $func: `void FNA3D_VerifySampler(FNA3D_Device *device,int32_t index,FNA3D_Texture *texture,FNA3D_SamplerState *sampler)`
	// $ret: `void`
	// $name: `FNA3D_VerifySampler`
	// $args: `FNA3D_Device *device,int32_t index,FNA3D_Texture *texture,FNA3D_SamplerState *sampler`
	// $argsargs: `device,index,texture,sampler`
	// $argc: `4`
	//
	// return FNA3D_VerifySampler(device,index,texture,sampler);
	WRAP__struct_FNA3D_VerifySampler wrap_struct = {
		.device = device,
		.index = index,
		.texture = texture,
		.sampler = sampler,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_VerifySampler, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_VerifySampler')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	int32_t index;
	FNA3D_Texture *texture;
	FNA3D_SamplerState *sampler;
} WRAP__struct_FNA3D_VerifyVertexSampler;
void WRAP__MAIN__FNA3D_VerifyVertexSampler(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_VerifyVertexSampler *wrap_struct = (WRAP__struct_FNA3D_VerifyVertexSampler*)wrap_struct_ptr;
	FNA3D_VerifyVertexSampler(
		wrap_struct->device,
		wrap_struct->index,
		wrap_struct->texture,
		wrap_struct->sampler
	);
}
void WRAP_FNA3D_VerifyVertexSampler(FNA3D_Device *device,int32_t index,FNA3D_Texture *texture,FNA3D_SamplerState *sampler)
{
	// $func: `void FNA3D_VerifyVertexSampler(FNA3D_Device *device,int32_t index,FNA3D_Texture *texture,FNA3D_SamplerState *sampler)`
	// $ret: `void`
	// $name: `FNA3D_VerifyVertexSampler`
	// $args: `FNA3D_Device *device,int32_t index,FNA3D_Texture *texture,FNA3D_SamplerState *sampler`
	// $argsargs: `device,index,texture,sampler`
	// $argc: `4`
	//
	// return FNA3D_VerifyVertexSampler(device,index,texture,sampler);
	WRAP__struct_FNA3D_VerifyVertexSampler wrap_struct = {
		.device = device,
		.index = index,
		.texture = texture,
		.sampler = sampler,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_VerifyVertexSampler, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_VerifyVertexSampler')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_VertexBufferBinding *bindings;
	int32_t numBindings;
	uint8_t bindingsUpdated;
	int32_t baseVertex;
} WRAP__struct_FNA3D_ApplyVertexBufferBindings;
void WRAP__MAIN__FNA3D_ApplyVertexBufferBindings(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_ApplyVertexBufferBindings *wrap_struct = (WRAP__struct_FNA3D_ApplyVertexBufferBindings*)wrap_struct_ptr;
	FNA3D_ApplyVertexBufferBindings(
		wrap_struct->device,
		wrap_struct->bindings,
		wrap_struct->numBindings,
		wrap_struct->bindingsUpdated,
		wrap_struct->baseVertex
	);
}
void WRAP_FNA3D_ApplyVertexBufferBindings(FNA3D_Device *device,FNA3D_VertexBufferBinding *bindings,int32_t numBindings,uint8_t bindingsUpdated,int32_t baseVertex)
{
	// $func: `void FNA3D_ApplyVertexBufferBindings(FNA3D_Device *device,FNA3D_VertexBufferBinding *bindings,int32_t numBindings,uint8_t bindingsUpdated,int32_t baseVertex)`
	// $ret: `void`
	// $name: `FNA3D_ApplyVertexBufferBindings`
	// $args: `FNA3D_Device *device,FNA3D_VertexBufferBinding *bindings,int32_t numBindings,uint8_t bindingsUpdated,int32_t baseVertex`
	// $argsargs: `device,bindings,numBindings,bindingsUpdated,baseVertex`
	// $argc: `5`
	//
	// return FNA3D_ApplyVertexBufferBindings(device,bindings,numBindings,bindingsUpdated,baseVertex);
	WRAP__struct_FNA3D_ApplyVertexBufferBindings wrap_struct = {
		.device = device,
		.bindings = bindings,
		.numBindings = numBindings,
		.bindingsUpdated = bindingsUpdated,
		.baseVertex = baseVertex,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_ApplyVertexBufferBindings, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_ApplyVertexBufferBindings')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_RenderTargetBinding *renderTargets;
	int32_t numRenderTargets;
	FNA3D_Renderbuffer *depthStencilBuffer;
	FNA3D_DepthFormat depthFormat;
	uint8_t preserveTargetContents;
} WRAP__struct_FNA3D_SetRenderTargets;
void WRAP__MAIN__FNA3D_SetRenderTargets(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_SetRenderTargets *wrap_struct = (WRAP__struct_FNA3D_SetRenderTargets*)wrap_struct_ptr;
	FNA3D_SetRenderTargets(
		wrap_struct->device,
		wrap_struct->renderTargets,
		wrap_struct->numRenderTargets,
		wrap_struct->depthStencilBuffer,
		wrap_struct->depthFormat,
		wrap_struct->preserveTargetContents
	);
}
void WRAP_FNA3D_SetRenderTargets(FNA3D_Device *device,FNA3D_RenderTargetBinding *renderTargets,int32_t numRenderTargets,FNA3D_Renderbuffer *depthStencilBuffer,FNA3D_DepthFormat depthFormat,uint8_t preserveTargetContents)
{
	// $func: `void FNA3D_SetRenderTargets(FNA3D_Device *device,FNA3D_RenderTargetBinding *renderTargets,int32_t numRenderTargets,FNA3D_Renderbuffer *depthStencilBuffer,FNA3D_DepthFormat depthFormat,uint8_t preserveTargetContents)`
	// $ret: `void`
	// $name: `FNA3D_SetRenderTargets`
	// $args: `FNA3D_Device *device,FNA3D_RenderTargetBinding *renderTargets,int32_t numRenderTargets,FNA3D_Renderbuffer *depthStencilBuffer,FNA3D_DepthFormat depthFormat,uint8_t preserveTargetContents`
	// $argsargs: `device,renderTargets,numRenderTargets,depthStencilBuffer,depthFormat,preserveTargetContents`
	// $argc: `6`
	//
	// return FNA3D_SetRenderTargets(device,renderTargets,numRenderTargets,depthStencilBuffer,depthFormat,preserveTargetContents);
	WRAP__struct_FNA3D_SetRenderTargets wrap_struct = {
		.device = device,
		.renderTargets = renderTargets,
		.numRenderTargets = numRenderTargets,
		.depthStencilBuffer = depthStencilBuffer,
		.depthFormat = depthFormat,
		.preserveTargetContents = preserveTargetContents,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_SetRenderTargets, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_SetRenderTargets')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_RenderTargetBinding *target;
} WRAP__struct_FNA3D_ResolveTarget;
void WRAP__MAIN__FNA3D_ResolveTarget(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_ResolveTarget *wrap_struct = (WRAP__struct_FNA3D_ResolveTarget*)wrap_struct_ptr;
	FNA3D_ResolveTarget(
		wrap_struct->device,
		wrap_struct->target
	);
}
void WRAP_FNA3D_ResolveTarget(FNA3D_Device *device,FNA3D_RenderTargetBinding *target)
{
	// $func: `void FNA3D_ResolveTarget(FNA3D_Device *device,FNA3D_RenderTargetBinding *target)`
	// $ret: `void`
	// $name: `FNA3D_ResolveTarget`
	// $args: `FNA3D_Device *device,FNA3D_RenderTargetBinding *target`
	// $argsargs: `device,target`
	// $argc: `2`
	//
	// return FNA3D_ResolveTarget(device,target);
	WRAP__struct_FNA3D_ResolveTarget wrap_struct = {
		.device = device,
		.target = target,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_ResolveTarget, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_ResolveTarget')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_PresentationParameters *presentationParameters;
} WRAP__struct_FNA3D_ResetBackbuffer;
void WRAP__MAIN__FNA3D_ResetBackbuffer(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_ResetBackbuffer *wrap_struct = (WRAP__struct_FNA3D_ResetBackbuffer*)wrap_struct_ptr;
	FNA3D_ResetBackbuffer(
		wrap_struct->device,
		wrap_struct->presentationParameters
	);
}
void WRAP_FNA3D_ResetBackbuffer(FNA3D_Device *device,FNA3D_PresentationParameters *presentationParameters)
{
	// $func: `void FNA3D_ResetBackbuffer(FNA3D_Device *device,FNA3D_PresentationParameters *presentationParameters)`
	// $ret: `void`
	// $name: `FNA3D_ResetBackbuffer`
	// $args: `FNA3D_Device *device,FNA3D_PresentationParameters *presentationParameters`
	// $argsargs: `device,presentationParameters`
	// $argc: `2`
	//
	// return FNA3D_ResetBackbuffer(device,presentationParameters);
	WRAP__struct_FNA3D_ResetBackbuffer wrap_struct = {
		.device = device,
		.presentationParameters = presentationParameters,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_ResetBackbuffer, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_ResetBackbuffer')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	int32_t x;
	int32_t y;
	int32_t w;
	int32_t h;
	void* data;
	int32_t dataLength;
} WRAP__struct_FNA3D_ReadBackbuffer;
void WRAP__MAIN__FNA3D_ReadBackbuffer(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_ReadBackbuffer *wrap_struct = (WRAP__struct_FNA3D_ReadBackbuffer*)wrap_struct_ptr;
	FNA3D_ReadBackbuffer(
		wrap_struct->device,
		wrap_struct->x,
		wrap_struct->y,
		wrap_struct->w,
		wrap_struct->h,
		wrap_struct->void*data,
		wrap_struct->dataLength
	);
}
void WRAP_FNA3D_ReadBackbuffer(FNA3D_Device *device,int32_t x,int32_t y,int32_t w,int32_t h,void* data,int32_t dataLength)
{
	// $func: `void FNA3D_ReadBackbuffer(FNA3D_Device *device,int32_t x,int32_t y,int32_t w,int32_t h,void* data,int32_t dataLength)`
	// $ret: `void`
	// $name: `FNA3D_ReadBackbuffer`
	// $args: `FNA3D_Device *device,int32_t x,int32_t y,int32_t w,int32_t h,void* data,int32_t dataLength`
	// $argsargs: `device,x,y,w,h,void*data,dataLength`
	// $argc: `7`
	//
	// return FNA3D_ReadBackbuffer(device,x,y,w,h,void*data,dataLength);
	WRAP__struct_FNA3D_ReadBackbuffer wrap_struct = {
		.device = device,
		.x = x,
		.y = y,
		.w = w,
		.h = h,
		.void*data = void*data,
		.dataLength = dataLength,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_ReadBackbuffer, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_ReadBackbuffer')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	int32_t *w;
	int32_t *h;
} WRAP__struct_FNA3D_GetBackbufferSize;
void WRAP__MAIN__FNA3D_GetBackbufferSize(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_GetBackbufferSize *wrap_struct = (WRAP__struct_FNA3D_GetBackbufferSize*)wrap_struct_ptr;
	FNA3D_GetBackbufferSize(
		wrap_struct->device,
		wrap_struct->w,
		wrap_struct->h
	);
}
void WRAP_FNA3D_GetBackbufferSize(FNA3D_Device *device,int32_t *w,int32_t *h)
{
	// $func: `void FNA3D_GetBackbufferSize(FNA3D_Device *device,int32_t *w,int32_t *h)`
	// $ret: `void`
	// $name: `FNA3D_GetBackbufferSize`
	// $args: `FNA3D_Device *device,int32_t *w,int32_t *h`
	// $argsargs: `device,w,h`
	// $argc: `3`
	//
	// return FNA3D_GetBackbufferSize(device,w,h);
	WRAP__struct_FNA3D_GetBackbufferSize wrap_struct = {
		.device = device,
		.w = w,
		.h = h,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_GetBackbufferSize, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_GetBackbufferSize')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_SurfaceFormat *WRAP_RET;
} WRAP__struct_FNA3D_GetBackbufferSurfaceFormat;
void WRAP__MAIN__FNA3D_GetBackbufferSurfaceFormat(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_GetBackbufferSurfaceFormat *wrap_struct = (WRAP__struct_FNA3D_GetBackbufferSurfaceFormat*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_GetBackbufferSurfaceFormat(
		wrap_struct->device
	);
}
FNA3D_SurfaceFormat WRAP_FNA3D_GetBackbufferSurfaceFormat(FNA3D_Device *device)
{
	// $func: `FNA3D_SurfaceFormat FNA3D_GetBackbufferSurfaceFormat(FNA3D_Device *device)`
	// $ret: `FNA3D_SurfaceFormat`
	// $name: `FNA3D_GetBackbufferSurfaceFormat`
	// $args: `FNA3D_Device *device`
	// $argsargs: `device`
	// $argc: `1`
	//
	// return FNA3D_GetBackbufferSurfaceFormat(device);
	FNA3D_SurfaceFormat wrap_ret;
	WRAP__struct_FNA3D_GetBackbufferSurfaceFormat wrap_struct = {
		.device = device,
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_GetBackbufferSurfaceFormat, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_GetBackbufferSurfaceFormat')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_DepthFormat *WRAP_RET;
} WRAP__struct_FNA3D_GetBackbufferDepthFormat;
void WRAP__MAIN__FNA3D_GetBackbufferDepthFormat(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_GetBackbufferDepthFormat *wrap_struct = (WRAP__struct_FNA3D_GetBackbufferDepthFormat*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_GetBackbufferDepthFormat(
		wrap_struct->device
	);
}
FNA3D_DepthFormat WRAP_FNA3D_GetBackbufferDepthFormat(FNA3D_Device *device)
{
	// $func: `FNA3D_DepthFormat FNA3D_GetBackbufferDepthFormat(FNA3D_Device *device)`
	// $ret: `FNA3D_DepthFormat`
	// $name: `FNA3D_GetBackbufferDepthFormat`
	// $args: `FNA3D_Device *device`
	// $argsargs: `device`
	// $argc: `1`
	//
	// return FNA3D_GetBackbufferDepthFormat(device);
	FNA3D_DepthFormat wrap_ret;
	WRAP__struct_FNA3D_GetBackbufferDepthFormat wrap_struct = {
		.device = device,
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_GetBackbufferDepthFormat, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_GetBackbufferDepthFormat')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	FNA3D_Device *device;
	int32_t *WRAP_RET;
} WRAP__struct_FNA3D_GetBackbufferMultiSampleCount;
void WRAP__MAIN__FNA3D_GetBackbufferMultiSampleCount(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_GetBackbufferMultiSampleCount *wrap_struct = (WRAP__struct_FNA3D_GetBackbufferMultiSampleCount*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_GetBackbufferMultiSampleCount(
		wrap_struct->device
	);
}
int32_t WRAP_FNA3D_GetBackbufferMultiSampleCount(FNA3D_Device *device)
{
	// $func: `int32_t FNA3D_GetBackbufferMultiSampleCount(FNA3D_Device *device)`
	// $ret: `int32_t`
	// $name: `FNA3D_GetBackbufferMultiSampleCount`
	// $args: `FNA3D_Device *device`
	// $argsargs: `device`
	// $argc: `1`
	//
	// return FNA3D_GetBackbufferMultiSampleCount(device);
	int32_t wrap_ret;
	WRAP__struct_FNA3D_GetBackbufferMultiSampleCount wrap_struct = {
		.device = device,
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_GetBackbufferMultiSampleCount, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_GetBackbufferMultiSampleCount')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_SurfaceFormat format;
	int32_t width;
	int32_t height;
	int32_t levelCount;
	uint8_t isRenderTarget;
	FNA3D_Texture* *WRAP_RET;
} WRAP__struct_FNA3D_CreateTexture2D;
void WRAP__MAIN__FNA3D_CreateTexture2D(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_CreateTexture2D *wrap_struct = (WRAP__struct_FNA3D_CreateTexture2D*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_CreateTexture2D(
		wrap_struct->device,
		wrap_struct->format,
		wrap_struct->width,
		wrap_struct->height,
		wrap_struct->levelCount,
		wrap_struct->isRenderTarget
	);
}
FNA3D_Texture* WRAP_FNA3D_CreateTexture2D(FNA3D_Device *device,FNA3D_SurfaceFormat format,int32_t width,int32_t height,int32_t levelCount,uint8_t isRenderTarget)
{
	// $func: `FNA3D_Texture* FNA3D_CreateTexture2D(FNA3D_Device *device,FNA3D_SurfaceFormat format,int32_t width,int32_t height,int32_t levelCount,uint8_t isRenderTarget)`
	// $ret: `FNA3D_Texture*`
	// $name: `FNA3D_CreateTexture2D`
	// $args: `FNA3D_Device *device,FNA3D_SurfaceFormat format,int32_t width,int32_t height,int32_t levelCount,uint8_t isRenderTarget`
	// $argsargs: `device,format,width,height,levelCount,isRenderTarget`
	// $argc: `6`
	//
	// return FNA3D_CreateTexture2D(device,format,width,height,levelCount,isRenderTarget);
	FNA3D_Texture* wrap_ret;
	WRAP__struct_FNA3D_CreateTexture2D wrap_struct = {
		.device = device,
		.format = format,
		.width = width,
		.height = height,
		.levelCount = levelCount,
		.isRenderTarget = isRenderTarget,
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_CreateTexture2D, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_CreateTexture2D')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_SurfaceFormat format;
	int32_t width;
	int32_t height;
	int32_t depth;
	int32_t levelCount;
	FNA3D_Texture* *WRAP_RET;
} WRAP__struct_FNA3D_CreateTexture3D;
void WRAP__MAIN__FNA3D_CreateTexture3D(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_CreateTexture3D *wrap_struct = (WRAP__struct_FNA3D_CreateTexture3D*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_CreateTexture3D(
		wrap_struct->device,
		wrap_struct->format,
		wrap_struct->width,
		wrap_struct->height,
		wrap_struct->depth,
		wrap_struct->levelCount
	);
}
FNA3D_Texture* WRAP_FNA3D_CreateTexture3D(FNA3D_Device *device,FNA3D_SurfaceFormat format,int32_t width,int32_t height,int32_t depth,int32_t levelCount)
{
	// $func: `FNA3D_Texture* FNA3D_CreateTexture3D(FNA3D_Device *device,FNA3D_SurfaceFormat format,int32_t width,int32_t height,int32_t depth,int32_t levelCount)`
	// $ret: `FNA3D_Texture*`
	// $name: `FNA3D_CreateTexture3D`
	// $args: `FNA3D_Device *device,FNA3D_SurfaceFormat format,int32_t width,int32_t height,int32_t depth,int32_t levelCount`
	// $argsargs: `device,format,width,height,depth,levelCount`
	// $argc: `6`
	//
	// return FNA3D_CreateTexture3D(device,format,width,height,depth,levelCount);
	FNA3D_Texture* wrap_ret;
	WRAP__struct_FNA3D_CreateTexture3D wrap_struct = {
		.device = device,
		.format = format,
		.width = width,
		.height = height,
		.depth = depth,
		.levelCount = levelCount,
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_CreateTexture3D, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_CreateTexture3D')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_SurfaceFormat format;
	int32_t size;
	int32_t levelCount;
	uint8_t isRenderTarget;
	FNA3D_Texture* *WRAP_RET;
} WRAP__struct_FNA3D_CreateTextureCube;
void WRAP__MAIN__FNA3D_CreateTextureCube(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_CreateTextureCube *wrap_struct = (WRAP__struct_FNA3D_CreateTextureCube*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_CreateTextureCube(
		wrap_struct->device,
		wrap_struct->format,
		wrap_struct->size,
		wrap_struct->levelCount,
		wrap_struct->isRenderTarget
	);
}
FNA3D_Texture* WRAP_FNA3D_CreateTextureCube(FNA3D_Device *device,FNA3D_SurfaceFormat format,int32_t size,int32_t levelCount,uint8_t isRenderTarget)
{
	// $func: `FNA3D_Texture* FNA3D_CreateTextureCube(FNA3D_Device *device,FNA3D_SurfaceFormat format,int32_t size,int32_t levelCount,uint8_t isRenderTarget)`
	// $ret: `FNA3D_Texture*`
	// $name: `FNA3D_CreateTextureCube`
	// $args: `FNA3D_Device *device,FNA3D_SurfaceFormat format,int32_t size,int32_t levelCount,uint8_t isRenderTarget`
	// $argsargs: `device,format,size,levelCount,isRenderTarget`
	// $argc: `5`
	//
	// return FNA3D_CreateTextureCube(device,format,size,levelCount,isRenderTarget);
	FNA3D_Texture* wrap_ret;
	WRAP__struct_FNA3D_CreateTextureCube wrap_struct = {
		.device = device,
		.format = format,
		.size = size,
		.levelCount = levelCount,
		.isRenderTarget = isRenderTarget,
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_CreateTextureCube, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_CreateTextureCube')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Texture *texture;
} WRAP__struct_FNA3D_AddDisposeTexture;
void WRAP__MAIN__FNA3D_AddDisposeTexture(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_AddDisposeTexture *wrap_struct = (WRAP__struct_FNA3D_AddDisposeTexture*)wrap_struct_ptr;
	FNA3D_AddDisposeTexture(
		wrap_struct->device,
		wrap_struct->texture
	);
}
void WRAP_FNA3D_AddDisposeTexture(FNA3D_Device *device,FNA3D_Texture *texture)
{
	// $func: `void FNA3D_AddDisposeTexture(FNA3D_Device *device,FNA3D_Texture *texture)`
	// $ret: `void`
	// $name: `FNA3D_AddDisposeTexture`
	// $args: `FNA3D_Device *device,FNA3D_Texture *texture`
	// $argsargs: `device,texture`
	// $argc: `2`
	//
	// return FNA3D_AddDisposeTexture(device,texture);
	WRAP__struct_FNA3D_AddDisposeTexture wrap_struct = {
		.device = device,
		.texture = texture,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_AddDisposeTexture, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_AddDisposeTexture')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Texture *texture;
	int32_t x;
	int32_t y;
	int32_t w;
	int32_t h;
	int32_t level;
	void* data;
	int32_t dataLength;
} WRAP__struct_FNA3D_SetTextureData2D;
void WRAP__MAIN__FNA3D_SetTextureData2D(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_SetTextureData2D *wrap_struct = (WRAP__struct_FNA3D_SetTextureData2D*)wrap_struct_ptr;
	FNA3D_SetTextureData2D(
		wrap_struct->device,
		wrap_struct->texture,
		wrap_struct->x,
		wrap_struct->y,
		wrap_struct->w,
		wrap_struct->h,
		wrap_struct->level,
		wrap_struct->void*data,
		wrap_struct->dataLength
	);
}
void WRAP_FNA3D_SetTextureData2D(FNA3D_Device *device,FNA3D_Texture *texture,int32_t x,int32_t y,int32_t w,int32_t h,int32_t level,void* data,int32_t dataLength)
{
	// $func: `void FNA3D_SetTextureData2D(FNA3D_Device *device,FNA3D_Texture *texture,int32_t x,int32_t y,int32_t w,int32_t h,int32_t level,void* data,int32_t dataLength)`
	// $ret: `void`
	// $name: `FNA3D_SetTextureData2D`
	// $args: `FNA3D_Device *device,FNA3D_Texture *texture,int32_t x,int32_t y,int32_t w,int32_t h,int32_t level,void* data,int32_t dataLength`
	// $argsargs: `device,texture,x,y,w,h,level,void*data,dataLength`
	// $argc: `9`
	//
	// return FNA3D_SetTextureData2D(device,texture,x,y,w,h,level,void*data,dataLength);
	WRAP__struct_FNA3D_SetTextureData2D wrap_struct = {
		.device = device,
		.texture = texture,
		.x = x,
		.y = y,
		.w = w,
		.h = h,
		.level = level,
		.void*data = void*data,
		.dataLength = dataLength,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_SetTextureData2D, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_SetTextureData2D')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Texture *texture;
	int32_t x;
	int32_t y;
	int32_t z;
	int32_t w;
	int32_t h;
	int32_t d;
	int32_t level;
	void* data;
	int32_t dataLength;
} WRAP__struct_FNA3D_SetTextureData3D;
void WRAP__MAIN__FNA3D_SetTextureData3D(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_SetTextureData3D *wrap_struct = (WRAP__struct_FNA3D_SetTextureData3D*)wrap_struct_ptr;
	FNA3D_SetTextureData3D(
		wrap_struct->device,
		wrap_struct->texture,
		wrap_struct->x,
		wrap_struct->y,
		wrap_struct->z,
		wrap_struct->w,
		wrap_struct->h,
		wrap_struct->d,
		wrap_struct->level,
		wrap_struct->void*data,
		wrap_struct->dataLength
	);
}
void WRAP_FNA3D_SetTextureData3D(FNA3D_Device *device,FNA3D_Texture *texture,int32_t x,int32_t y,int32_t z,int32_t w,int32_t h,int32_t d,int32_t level,void* data,int32_t dataLength)
{
	// $func: `void FNA3D_SetTextureData3D(FNA3D_Device *device,FNA3D_Texture *texture,int32_t x,int32_t y,int32_t z,int32_t w,int32_t h,int32_t d,int32_t level,void* data,int32_t dataLength)`
	// $ret: `void`
	// $name: `FNA3D_SetTextureData3D`
	// $args: `FNA3D_Device *device,FNA3D_Texture *texture,int32_t x,int32_t y,int32_t z,int32_t w,int32_t h,int32_t d,int32_t level,void* data,int32_t dataLength`
	// $argsargs: `device,texture,x,y,z,w,h,d,level,void*data,dataLength`
	// $argc: `11`
	//
	// return FNA3D_SetTextureData3D(device,texture,x,y,z,w,h,d,level,void*data,dataLength);
	WRAP__struct_FNA3D_SetTextureData3D wrap_struct = {
		.device = device,
		.texture = texture,
		.x = x,
		.y = y,
		.z = z,
		.w = w,
		.h = h,
		.d = d,
		.level = level,
		.void*data = void*data,
		.dataLength = dataLength,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_SetTextureData3D, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_SetTextureData3D')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Texture *texture;
	int32_t x;
	int32_t y;
	int32_t w;
	int32_t h;
	FNA3D_CubeMapFace cubeMapFace;
	int32_t level;
	void* data;
	int32_t dataLength;
} WRAP__struct_FNA3D_SetTextureDataCube;
void WRAP__MAIN__FNA3D_SetTextureDataCube(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_SetTextureDataCube *wrap_struct = (WRAP__struct_FNA3D_SetTextureDataCube*)wrap_struct_ptr;
	FNA3D_SetTextureDataCube(
		wrap_struct->device,
		wrap_struct->texture,
		wrap_struct->x,
		wrap_struct->y,
		wrap_struct->w,
		wrap_struct->h,
		wrap_struct->cubeMapFace,
		wrap_struct->level,
		wrap_struct->void*data,
		wrap_struct->dataLength
	);
}
void WRAP_FNA3D_SetTextureDataCube(FNA3D_Device *device,FNA3D_Texture *texture,int32_t x,int32_t y,int32_t w,int32_t h,FNA3D_CubeMapFace cubeMapFace,int32_t level,void* data,int32_t dataLength)
{
	// $func: `void FNA3D_SetTextureDataCube(FNA3D_Device *device,FNA3D_Texture *texture,int32_t x,int32_t y,int32_t w,int32_t h,FNA3D_CubeMapFace cubeMapFace,int32_t level,void* data,int32_t dataLength)`
	// $ret: `void`
	// $name: `FNA3D_SetTextureDataCube`
	// $args: `FNA3D_Device *device,FNA3D_Texture *texture,int32_t x,int32_t y,int32_t w,int32_t h,FNA3D_CubeMapFace cubeMapFace,int32_t level,void* data,int32_t dataLength`
	// $argsargs: `device,texture,x,y,w,h,cubeMapFace,level,void*data,dataLength`
	// $argc: `10`
	//
	// return FNA3D_SetTextureDataCube(device,texture,x,y,w,h,cubeMapFace,level,void*data,dataLength);
	WRAP__struct_FNA3D_SetTextureDataCube wrap_struct = {
		.device = device,
		.texture = texture,
		.x = x,
		.y = y,
		.w = w,
		.h = h,
		.cubeMapFace = cubeMapFace,
		.level = level,
		.void*data = void*data,
		.dataLength = dataLength,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_SetTextureDataCube, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_SetTextureDataCube')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Texture *y;
	FNA3D_Texture *u;
	FNA3D_Texture *v;
	int32_t yWidth;
	int32_t yHeight;
	int32_t uvWidth;
	int32_t uvHeight;
	void* data;
	int32_t dataLength;
} WRAP__struct_FNA3D_SetTextureDataYUV;
void WRAP__MAIN__FNA3D_SetTextureDataYUV(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_SetTextureDataYUV *wrap_struct = (WRAP__struct_FNA3D_SetTextureDataYUV*)wrap_struct_ptr;
	FNA3D_SetTextureDataYUV(
		wrap_struct->device,
		wrap_struct->y,
		wrap_struct->u,
		wrap_struct->v,
		wrap_struct->yWidth,
		wrap_struct->yHeight,
		wrap_struct->uvWidth,
		wrap_struct->uvHeight,
		wrap_struct->void*data,
		wrap_struct->dataLength
	);
}
void WRAP_FNA3D_SetTextureDataYUV(FNA3D_Device *device,FNA3D_Texture *y,FNA3D_Texture *u,FNA3D_Texture *v,int32_t yWidth,int32_t yHeight,int32_t uvWidth,int32_t uvHeight,void* data,int32_t dataLength)
{
	// $func: `void FNA3D_SetTextureDataYUV(FNA3D_Device *device,FNA3D_Texture *y,FNA3D_Texture *u,FNA3D_Texture *v,int32_t yWidth,int32_t yHeight,int32_t uvWidth,int32_t uvHeight,void* data,int32_t dataLength)`
	// $ret: `void`
	// $name: `FNA3D_SetTextureDataYUV`
	// $args: `FNA3D_Device *device,FNA3D_Texture *y,FNA3D_Texture *u,FNA3D_Texture *v,int32_t yWidth,int32_t yHeight,int32_t uvWidth,int32_t uvHeight,void* data,int32_t dataLength`
	// $argsargs: `device,y,u,v,yWidth,yHeight,uvWidth,uvHeight,void*data,dataLength`
	// $argc: `10`
	//
	// return FNA3D_SetTextureDataYUV(device,y,u,v,yWidth,yHeight,uvWidth,uvHeight,void*data,dataLength);
	WRAP__struct_FNA3D_SetTextureDataYUV wrap_struct = {
		.device = device,
		.y = y,
		.u = u,
		.v = v,
		.yWidth = yWidth,
		.yHeight = yHeight,
		.uvWidth = uvWidth,
		.uvHeight = uvHeight,
		.void*data = void*data,
		.dataLength = dataLength,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_SetTextureDataYUV, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_SetTextureDataYUV')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Texture *texture;
	int32_t x;
	int32_t y;
	int32_t w;
	int32_t h;
	int32_t level;
	void* data;
	int32_t dataLength;
} WRAP__struct_FNA3D_GetTextureData2D;
void WRAP__MAIN__FNA3D_GetTextureData2D(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_GetTextureData2D *wrap_struct = (WRAP__struct_FNA3D_GetTextureData2D*)wrap_struct_ptr;
	FNA3D_GetTextureData2D(
		wrap_struct->device,
		wrap_struct->texture,
		wrap_struct->x,
		wrap_struct->y,
		wrap_struct->w,
		wrap_struct->h,
		wrap_struct->level,
		wrap_struct->void*data,
		wrap_struct->dataLength
	);
}
void WRAP_FNA3D_GetTextureData2D(FNA3D_Device *device,FNA3D_Texture *texture,int32_t x,int32_t y,int32_t w,int32_t h,int32_t level,void* data,int32_t dataLength)
{
	// $func: `void FNA3D_GetTextureData2D(FNA3D_Device *device,FNA3D_Texture *texture,int32_t x,int32_t y,int32_t w,int32_t h,int32_t level,void* data,int32_t dataLength)`
	// $ret: `void`
	// $name: `FNA3D_GetTextureData2D`
	// $args: `FNA3D_Device *device,FNA3D_Texture *texture,int32_t x,int32_t y,int32_t w,int32_t h,int32_t level,void* data,int32_t dataLength`
	// $argsargs: `device,texture,x,y,w,h,level,void*data,dataLength`
	// $argc: `9`
	//
	// return FNA3D_GetTextureData2D(device,texture,x,y,w,h,level,void*data,dataLength);
	WRAP__struct_FNA3D_GetTextureData2D wrap_struct = {
		.device = device,
		.texture = texture,
		.x = x,
		.y = y,
		.w = w,
		.h = h,
		.level = level,
		.void*data = void*data,
		.dataLength = dataLength,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_GetTextureData2D, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_GetTextureData2D')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Texture *texture;
	int32_t x;
	int32_t y;
	int32_t z;
	int32_t w;
	int32_t h;
	int32_t d;
	int32_t level;
	void* data;
	int32_t dataLength;
} WRAP__struct_FNA3D_GetTextureData3D;
void WRAP__MAIN__FNA3D_GetTextureData3D(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_GetTextureData3D *wrap_struct = (WRAP__struct_FNA3D_GetTextureData3D*)wrap_struct_ptr;
	FNA3D_GetTextureData3D(
		wrap_struct->device,
		wrap_struct->texture,
		wrap_struct->x,
		wrap_struct->y,
		wrap_struct->z,
		wrap_struct->w,
		wrap_struct->h,
		wrap_struct->d,
		wrap_struct->level,
		wrap_struct->void*data,
		wrap_struct->dataLength
	);
}
void WRAP_FNA3D_GetTextureData3D(FNA3D_Device *device,FNA3D_Texture *texture,int32_t x,int32_t y,int32_t z,int32_t w,int32_t h,int32_t d,int32_t level,void* data,int32_t dataLength)
{
	// $func: `void FNA3D_GetTextureData3D(FNA3D_Device *device,FNA3D_Texture *texture,int32_t x,int32_t y,int32_t z,int32_t w,int32_t h,int32_t d,int32_t level,void* data,int32_t dataLength)`
	// $ret: `void`
	// $name: `FNA3D_GetTextureData3D`
	// $args: `FNA3D_Device *device,FNA3D_Texture *texture,int32_t x,int32_t y,int32_t z,int32_t w,int32_t h,int32_t d,int32_t level,void* data,int32_t dataLength`
	// $argsargs: `device,texture,x,y,z,w,h,d,level,void*data,dataLength`
	// $argc: `11`
	//
	// return FNA3D_GetTextureData3D(device,texture,x,y,z,w,h,d,level,void*data,dataLength);
	WRAP__struct_FNA3D_GetTextureData3D wrap_struct = {
		.device = device,
		.texture = texture,
		.x = x,
		.y = y,
		.z = z,
		.w = w,
		.h = h,
		.d = d,
		.level = level,
		.void*data = void*data,
		.dataLength = dataLength,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_GetTextureData3D, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_GetTextureData3D')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Texture *texture;
	int32_t x;
	int32_t y;
	int32_t w;
	int32_t h;
	FNA3D_CubeMapFace cubeMapFace;
	int32_t level;
	void* data;
	int32_t dataLength;
} WRAP__struct_FNA3D_GetTextureDataCube;
void WRAP__MAIN__FNA3D_GetTextureDataCube(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_GetTextureDataCube *wrap_struct = (WRAP__struct_FNA3D_GetTextureDataCube*)wrap_struct_ptr;
	FNA3D_GetTextureDataCube(
		wrap_struct->device,
		wrap_struct->texture,
		wrap_struct->x,
		wrap_struct->y,
		wrap_struct->w,
		wrap_struct->h,
		wrap_struct->cubeMapFace,
		wrap_struct->level,
		wrap_struct->void*data,
		wrap_struct->dataLength
	);
}
void WRAP_FNA3D_GetTextureDataCube(FNA3D_Device *device,FNA3D_Texture *texture,int32_t x,int32_t y,int32_t w,int32_t h,FNA3D_CubeMapFace cubeMapFace,int32_t level,void* data,int32_t dataLength)
{
	// $func: `void FNA3D_GetTextureDataCube(FNA3D_Device *device,FNA3D_Texture *texture,int32_t x,int32_t y,int32_t w,int32_t h,FNA3D_CubeMapFace cubeMapFace,int32_t level,void* data,int32_t dataLength)`
	// $ret: `void`
	// $name: `FNA3D_GetTextureDataCube`
	// $args: `FNA3D_Device *device,FNA3D_Texture *texture,int32_t x,int32_t y,int32_t w,int32_t h,FNA3D_CubeMapFace cubeMapFace,int32_t level,void* data,int32_t dataLength`
	// $argsargs: `device,texture,x,y,w,h,cubeMapFace,level,void*data,dataLength`
	// $argc: `10`
	//
	// return FNA3D_GetTextureDataCube(device,texture,x,y,w,h,cubeMapFace,level,void*data,dataLength);
	WRAP__struct_FNA3D_GetTextureDataCube wrap_struct = {
		.device = device,
		.texture = texture,
		.x = x,
		.y = y,
		.w = w,
		.h = h,
		.cubeMapFace = cubeMapFace,
		.level = level,
		.void*data = void*data,
		.dataLength = dataLength,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_GetTextureDataCube, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_GetTextureDataCube')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	int32_t width;
	int32_t height;
	FNA3D_SurfaceFormat format;
	int32_t multiSampleCount;
	FNA3D_Texture *texture;
	FNA3D_Renderbuffer* *WRAP_RET;
} WRAP__struct_FNA3D_GenColorRenderbuffer;
void WRAP__MAIN__FNA3D_GenColorRenderbuffer(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_GenColorRenderbuffer *wrap_struct = (WRAP__struct_FNA3D_GenColorRenderbuffer*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_GenColorRenderbuffer(
		wrap_struct->device,
		wrap_struct->width,
		wrap_struct->height,
		wrap_struct->format,
		wrap_struct->multiSampleCount,
		wrap_struct->texture
	);
}
FNA3D_Renderbuffer* WRAP_FNA3D_GenColorRenderbuffer(FNA3D_Device *device,int32_t width,int32_t height,FNA3D_SurfaceFormat format,int32_t multiSampleCount,FNA3D_Texture *texture)
{
	// $func: `FNA3D_Renderbuffer* FNA3D_GenColorRenderbuffer(FNA3D_Device *device,int32_t width,int32_t height,FNA3D_SurfaceFormat format,int32_t multiSampleCount,FNA3D_Texture *texture)`
	// $ret: `FNA3D_Renderbuffer*`
	// $name: `FNA3D_GenColorRenderbuffer`
	// $args: `FNA3D_Device *device,int32_t width,int32_t height,FNA3D_SurfaceFormat format,int32_t multiSampleCount,FNA3D_Texture *texture`
	// $argsargs: `device,width,height,format,multiSampleCount,texture`
	// $argc: `6`
	//
	// return FNA3D_GenColorRenderbuffer(device,width,height,format,multiSampleCount,texture);
	FNA3D_Renderbuffer* wrap_ret;
	WRAP__struct_FNA3D_GenColorRenderbuffer wrap_struct = {
		.device = device,
		.width = width,
		.height = height,
		.format = format,
		.multiSampleCount = multiSampleCount,
		.texture = texture,
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_GenColorRenderbuffer, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_GenColorRenderbuffer')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	FNA3D_Device *device;
	int32_t width;
	int32_t height;
	FNA3D_DepthFormat format;
	int32_t multiSampleCount;
	FNA3D_Renderbuffer* *WRAP_RET;
} WRAP__struct_FNA3D_GenDepthStencilRenderbuffer;
void WRAP__MAIN__FNA3D_GenDepthStencilRenderbuffer(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_GenDepthStencilRenderbuffer *wrap_struct = (WRAP__struct_FNA3D_GenDepthStencilRenderbuffer*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_GenDepthStencilRenderbuffer(
		wrap_struct->device,
		wrap_struct->width,
		wrap_struct->height,
		wrap_struct->format,
		wrap_struct->multiSampleCount
	);
}
FNA3D_Renderbuffer* WRAP_FNA3D_GenDepthStencilRenderbuffer(FNA3D_Device *device,int32_t width,int32_t height,FNA3D_DepthFormat format,int32_t multiSampleCount)
{
	// $func: `FNA3D_Renderbuffer* FNA3D_GenDepthStencilRenderbuffer(FNA3D_Device *device,int32_t width,int32_t height,FNA3D_DepthFormat format,int32_t multiSampleCount)`
	// $ret: `FNA3D_Renderbuffer*`
	// $name: `FNA3D_GenDepthStencilRenderbuffer`
	// $args: `FNA3D_Device *device,int32_t width,int32_t height,FNA3D_DepthFormat format,int32_t multiSampleCount`
	// $argsargs: `device,width,height,format,multiSampleCount`
	// $argc: `5`
	//
	// return FNA3D_GenDepthStencilRenderbuffer(device,width,height,format,multiSampleCount);
	FNA3D_Renderbuffer* wrap_ret;
	WRAP__struct_FNA3D_GenDepthStencilRenderbuffer wrap_struct = {
		.device = device,
		.width = width,
		.height = height,
		.format = format,
		.multiSampleCount = multiSampleCount,
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_GenDepthStencilRenderbuffer, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_GenDepthStencilRenderbuffer')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Renderbuffer *renderbuffer;
} WRAP__struct_FNA3D_AddDisposeRenderbuffer;
void WRAP__MAIN__FNA3D_AddDisposeRenderbuffer(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_AddDisposeRenderbuffer *wrap_struct = (WRAP__struct_FNA3D_AddDisposeRenderbuffer*)wrap_struct_ptr;
	FNA3D_AddDisposeRenderbuffer(
		wrap_struct->device,
		wrap_struct->renderbuffer
	);
}
void WRAP_FNA3D_AddDisposeRenderbuffer(FNA3D_Device *device,FNA3D_Renderbuffer *renderbuffer)
{
	// $func: `void FNA3D_AddDisposeRenderbuffer(FNA3D_Device *device,FNA3D_Renderbuffer *renderbuffer)`
	// $ret: `void`
	// $name: `FNA3D_AddDisposeRenderbuffer`
	// $args: `FNA3D_Device *device,FNA3D_Renderbuffer *renderbuffer`
	// $argsargs: `device,renderbuffer`
	// $argc: `2`
	//
	// return FNA3D_AddDisposeRenderbuffer(device,renderbuffer);
	WRAP__struct_FNA3D_AddDisposeRenderbuffer wrap_struct = {
		.device = device,
		.renderbuffer = renderbuffer,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_AddDisposeRenderbuffer, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_AddDisposeRenderbuffer')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	uint8_t dynamic;
	FNA3D_BufferUsage usage;
	int32_t sizeInBytes;
	FNA3D_Buffer* *WRAP_RET;
} WRAP__struct_FNA3D_GenVertexBuffer;
void WRAP__MAIN__FNA3D_GenVertexBuffer(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_GenVertexBuffer *wrap_struct = (WRAP__struct_FNA3D_GenVertexBuffer*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_GenVertexBuffer(
		wrap_struct->device,
		wrap_struct->dynamic,
		wrap_struct->usage,
		wrap_struct->sizeInBytes
	);
}
FNA3D_Buffer* WRAP_FNA3D_GenVertexBuffer(FNA3D_Device *device,uint8_t dynamic,FNA3D_BufferUsage usage,int32_t sizeInBytes)
{
	// $func: `FNA3D_Buffer* FNA3D_GenVertexBuffer(FNA3D_Device *device,uint8_t dynamic,FNA3D_BufferUsage usage,int32_t sizeInBytes)`
	// $ret: `FNA3D_Buffer*`
	// $name: `FNA3D_GenVertexBuffer`
	// $args: `FNA3D_Device *device,uint8_t dynamic,FNA3D_BufferUsage usage,int32_t sizeInBytes`
	// $argsargs: `device,dynamic,usage,sizeInBytes`
	// $argc: `4`
	//
	// return FNA3D_GenVertexBuffer(device,dynamic,usage,sizeInBytes);
	FNA3D_Buffer* wrap_ret;
	WRAP__struct_FNA3D_GenVertexBuffer wrap_struct = {
		.device = device,
		.dynamic = dynamic,
		.usage = usage,
		.sizeInBytes = sizeInBytes,
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_GenVertexBuffer, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_GenVertexBuffer')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Buffer *buffer;
} WRAP__struct_FNA3D_AddDisposeVertexBuffer;
void WRAP__MAIN__FNA3D_AddDisposeVertexBuffer(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_AddDisposeVertexBuffer *wrap_struct = (WRAP__struct_FNA3D_AddDisposeVertexBuffer*)wrap_struct_ptr;
	FNA3D_AddDisposeVertexBuffer(
		wrap_struct->device,
		wrap_struct->buffer
	);
}
void WRAP_FNA3D_AddDisposeVertexBuffer(FNA3D_Device *device,FNA3D_Buffer *buffer)
{
	// $func: `void FNA3D_AddDisposeVertexBuffer(FNA3D_Device *device,FNA3D_Buffer *buffer)`
	// $ret: `void`
	// $name: `FNA3D_AddDisposeVertexBuffer`
	// $args: `FNA3D_Device *device,FNA3D_Buffer *buffer`
	// $argsargs: `device,buffer`
	// $argc: `2`
	//
	// return FNA3D_AddDisposeVertexBuffer(device,buffer);
	WRAP__struct_FNA3D_AddDisposeVertexBuffer wrap_struct = {
		.device = device,
		.buffer = buffer,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_AddDisposeVertexBuffer, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_AddDisposeVertexBuffer')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Buffer *buffer;
	int32_t offsetInBytes;
	void* data;
	int32_t elementCount;
	int32_t elementSizeInBytes;
	int32_t vertexStride;
	FNA3D_SetDataOptions options;
} WRAP__struct_FNA3D_SetVertexBufferData;
void WRAP__MAIN__FNA3D_SetVertexBufferData(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_SetVertexBufferData *wrap_struct = (WRAP__struct_FNA3D_SetVertexBufferData*)wrap_struct_ptr;
	FNA3D_SetVertexBufferData(
		wrap_struct->device,
		wrap_struct->buffer,
		wrap_struct->offsetInBytes,
		wrap_struct->void*data,
		wrap_struct->elementCount,
		wrap_struct->elementSizeInBytes,
		wrap_struct->vertexStride,
		wrap_struct->options
	);
}
void WRAP_FNA3D_SetVertexBufferData(FNA3D_Device *device,FNA3D_Buffer *buffer,int32_t offsetInBytes,void* data,int32_t elementCount,int32_t elementSizeInBytes,int32_t vertexStride,FNA3D_SetDataOptions options)
{
	// $func: `void FNA3D_SetVertexBufferData(FNA3D_Device *device,FNA3D_Buffer *buffer,int32_t offsetInBytes,void* data,int32_t elementCount,int32_t elementSizeInBytes,int32_t vertexStride,FNA3D_SetDataOptions options)`
	// $ret: `void`
	// $name: `FNA3D_SetVertexBufferData`
	// $args: `FNA3D_Device *device,FNA3D_Buffer *buffer,int32_t offsetInBytes,void* data,int32_t elementCount,int32_t elementSizeInBytes,int32_t vertexStride,FNA3D_SetDataOptions options`
	// $argsargs: `device,buffer,offsetInBytes,void*data,elementCount,elementSizeInBytes,vertexStride,options`
	// $argc: `8`
	//
	// return FNA3D_SetVertexBufferData(device,buffer,offsetInBytes,void*data,elementCount,elementSizeInBytes,vertexStride,options);
	WRAP__struct_FNA3D_SetVertexBufferData wrap_struct = {
		.device = device,
		.buffer = buffer,
		.offsetInBytes = offsetInBytes,
		.void*data = void*data,
		.elementCount = elementCount,
		.elementSizeInBytes = elementSizeInBytes,
		.vertexStride = vertexStride,
		.options = options,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_SetVertexBufferData, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_SetVertexBufferData')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Buffer *buffer;
	int32_t offsetInBytes;
	void* data;
	int32_t elementCount;
	int32_t elementSizeInBytes;
	int32_t vertexStride;
} WRAP__struct_FNA3D_GetVertexBufferData;
void WRAP__MAIN__FNA3D_GetVertexBufferData(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_GetVertexBufferData *wrap_struct = (WRAP__struct_FNA3D_GetVertexBufferData*)wrap_struct_ptr;
	FNA3D_GetVertexBufferData(
		wrap_struct->device,
		wrap_struct->buffer,
		wrap_struct->offsetInBytes,
		wrap_struct->void*data,
		wrap_struct->elementCount,
		wrap_struct->elementSizeInBytes,
		wrap_struct->vertexStride
	);
}
void WRAP_FNA3D_GetVertexBufferData(FNA3D_Device *device,FNA3D_Buffer *buffer,int32_t offsetInBytes,void* data,int32_t elementCount,int32_t elementSizeInBytes,int32_t vertexStride)
{
	// $func: `void FNA3D_GetVertexBufferData(FNA3D_Device *device,FNA3D_Buffer *buffer,int32_t offsetInBytes,void* data,int32_t elementCount,int32_t elementSizeInBytes,int32_t vertexStride)`
	// $ret: `void`
	// $name: `FNA3D_GetVertexBufferData`
	// $args: `FNA3D_Device *device,FNA3D_Buffer *buffer,int32_t offsetInBytes,void* data,int32_t elementCount,int32_t elementSizeInBytes,int32_t vertexStride`
	// $argsargs: `device,buffer,offsetInBytes,void*data,elementCount,elementSizeInBytes,vertexStride`
	// $argc: `7`
	//
	// return FNA3D_GetVertexBufferData(device,buffer,offsetInBytes,void*data,elementCount,elementSizeInBytes,vertexStride);
	WRAP__struct_FNA3D_GetVertexBufferData wrap_struct = {
		.device = device,
		.buffer = buffer,
		.offsetInBytes = offsetInBytes,
		.void*data = void*data,
		.elementCount = elementCount,
		.elementSizeInBytes = elementSizeInBytes,
		.vertexStride = vertexStride,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_GetVertexBufferData, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_GetVertexBufferData')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	uint8_t dynamic;
	FNA3D_BufferUsage usage;
	int32_t sizeInBytes;
	FNA3D_Buffer* *WRAP_RET;
} WRAP__struct_FNA3D_GenIndexBuffer;
void WRAP__MAIN__FNA3D_GenIndexBuffer(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_GenIndexBuffer *wrap_struct = (WRAP__struct_FNA3D_GenIndexBuffer*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_GenIndexBuffer(
		wrap_struct->device,
		wrap_struct->dynamic,
		wrap_struct->usage,
		wrap_struct->sizeInBytes
	);
}
FNA3D_Buffer* WRAP_FNA3D_GenIndexBuffer(FNA3D_Device *device,uint8_t dynamic,FNA3D_BufferUsage usage,int32_t sizeInBytes)
{
	// $func: `FNA3D_Buffer* FNA3D_GenIndexBuffer(FNA3D_Device *device,uint8_t dynamic,FNA3D_BufferUsage usage,int32_t sizeInBytes)`
	// $ret: `FNA3D_Buffer*`
	// $name: `FNA3D_GenIndexBuffer`
	// $args: `FNA3D_Device *device,uint8_t dynamic,FNA3D_BufferUsage usage,int32_t sizeInBytes`
	// $argsargs: `device,dynamic,usage,sizeInBytes`
	// $argc: `4`
	//
	// return FNA3D_GenIndexBuffer(device,dynamic,usage,sizeInBytes);
	FNA3D_Buffer* wrap_ret;
	WRAP__struct_FNA3D_GenIndexBuffer wrap_struct = {
		.device = device,
		.dynamic = dynamic,
		.usage = usage,
		.sizeInBytes = sizeInBytes,
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_GenIndexBuffer, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_GenIndexBuffer')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Buffer *buffer;
} WRAP__struct_FNA3D_AddDisposeIndexBuffer;
void WRAP__MAIN__FNA3D_AddDisposeIndexBuffer(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_AddDisposeIndexBuffer *wrap_struct = (WRAP__struct_FNA3D_AddDisposeIndexBuffer*)wrap_struct_ptr;
	FNA3D_AddDisposeIndexBuffer(
		wrap_struct->device,
		wrap_struct->buffer
	);
}
void WRAP_FNA3D_AddDisposeIndexBuffer(FNA3D_Device *device,FNA3D_Buffer *buffer)
{
	// $func: `void FNA3D_AddDisposeIndexBuffer(FNA3D_Device *device,FNA3D_Buffer *buffer)`
	// $ret: `void`
	// $name: `FNA3D_AddDisposeIndexBuffer`
	// $args: `FNA3D_Device *device,FNA3D_Buffer *buffer`
	// $argsargs: `device,buffer`
	// $argc: `2`
	//
	// return FNA3D_AddDisposeIndexBuffer(device,buffer);
	WRAP__struct_FNA3D_AddDisposeIndexBuffer wrap_struct = {
		.device = device,
		.buffer = buffer,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_AddDisposeIndexBuffer, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_AddDisposeIndexBuffer')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Buffer *buffer;
	int32_t offsetInBytes;
	void* data;
	int32_t dataLength;
	FNA3D_SetDataOptions options;
} WRAP__struct_FNA3D_SetIndexBufferData;
void WRAP__MAIN__FNA3D_SetIndexBufferData(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_SetIndexBufferData *wrap_struct = (WRAP__struct_FNA3D_SetIndexBufferData*)wrap_struct_ptr;
	FNA3D_SetIndexBufferData(
		wrap_struct->device,
		wrap_struct->buffer,
		wrap_struct->offsetInBytes,
		wrap_struct->void*data,
		wrap_struct->dataLength,
		wrap_struct->options
	);
}
void WRAP_FNA3D_SetIndexBufferData(FNA3D_Device *device,FNA3D_Buffer *buffer,int32_t offsetInBytes,void* data,int32_t dataLength,FNA3D_SetDataOptions options)
{
	// $func: `void FNA3D_SetIndexBufferData(FNA3D_Device *device,FNA3D_Buffer *buffer,int32_t offsetInBytes,void* data,int32_t dataLength,FNA3D_SetDataOptions options)`
	// $ret: `void`
	// $name: `FNA3D_SetIndexBufferData`
	// $args: `FNA3D_Device *device,FNA3D_Buffer *buffer,int32_t offsetInBytes,void* data,int32_t dataLength,FNA3D_SetDataOptions options`
	// $argsargs: `device,buffer,offsetInBytes,void*data,dataLength,options`
	// $argc: `6`
	//
	// return FNA3D_SetIndexBufferData(device,buffer,offsetInBytes,void*data,dataLength,options);
	WRAP__struct_FNA3D_SetIndexBufferData wrap_struct = {
		.device = device,
		.buffer = buffer,
		.offsetInBytes = offsetInBytes,
		.void*data = void*data,
		.dataLength = dataLength,
		.options = options,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_SetIndexBufferData, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_SetIndexBufferData')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Buffer *buffer;
	int32_t offsetInBytes;
	void* data;
	int32_t dataLength;
} WRAP__struct_FNA3D_GetIndexBufferData;
void WRAP__MAIN__FNA3D_GetIndexBufferData(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_GetIndexBufferData *wrap_struct = (WRAP__struct_FNA3D_GetIndexBufferData*)wrap_struct_ptr;
	FNA3D_GetIndexBufferData(
		wrap_struct->device,
		wrap_struct->buffer,
		wrap_struct->offsetInBytes,
		wrap_struct->void*data,
		wrap_struct->dataLength
	);
}
void WRAP_FNA3D_GetIndexBufferData(FNA3D_Device *device,FNA3D_Buffer *buffer,int32_t offsetInBytes,void* data,int32_t dataLength)
{
	// $func: `void FNA3D_GetIndexBufferData(FNA3D_Device *device,FNA3D_Buffer *buffer,int32_t offsetInBytes,void* data,int32_t dataLength)`
	// $ret: `void`
	// $name: `FNA3D_GetIndexBufferData`
	// $args: `FNA3D_Device *device,FNA3D_Buffer *buffer,int32_t offsetInBytes,void* data,int32_t dataLength`
	// $argsargs: `device,buffer,offsetInBytes,void*data,dataLength`
	// $argc: `5`
	//
	// return FNA3D_GetIndexBufferData(device,buffer,offsetInBytes,void*data,dataLength);
	WRAP__struct_FNA3D_GetIndexBufferData wrap_struct = {
		.device = device,
		.buffer = buffer,
		.offsetInBytes = offsetInBytes,
		.void*data = void*data,
		.dataLength = dataLength,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_GetIndexBufferData, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_GetIndexBufferData')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	uint8_t *effectCode;
	uint32_t effectCodeLength;
	FNA3D_Effect **effect;
	MOJOSHADER_effect **effectData;
} WRAP__struct_FNA3D_CreateEffect;
void WRAP__MAIN__FNA3D_CreateEffect(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_CreateEffect *wrap_struct = (WRAP__struct_FNA3D_CreateEffect*)wrap_struct_ptr;
	FNA3D_CreateEffect(
		wrap_struct->device,
		wrap_struct->effectCode,
		wrap_struct->effectCodeLength,
		wrap_struct->effect,
		wrap_struct->effectData
	);
}
void WRAP_FNA3D_CreateEffect(FNA3D_Device *device,uint8_t *effectCode,uint32_t effectCodeLength,FNA3D_Effect **effect,MOJOSHADER_effect **effectData)
{
	// $func: `void FNA3D_CreateEffect(FNA3D_Device *device,uint8_t *effectCode,uint32_t effectCodeLength,FNA3D_Effect **effect,MOJOSHADER_effect **effectData)`
	// $ret: `void`
	// $name: `FNA3D_CreateEffect`
	// $args: `FNA3D_Device *device,uint8_t *effectCode,uint32_t effectCodeLength,FNA3D_Effect **effect,MOJOSHADER_effect **effectData`
	// $argsargs: `device,effectCode,effectCodeLength,effect,effectData`
	// $argc: `5`
	//
	// return FNA3D_CreateEffect(device,effectCode,effectCodeLength,effect,effectData);
	WRAP__struct_FNA3D_CreateEffect wrap_struct = {
		.device = device,
		.effectCode = effectCode,
		.effectCodeLength = effectCodeLength,
		.effect = effect,
		.effectData = effectData,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_CreateEffect, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_CreateEffect')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Effect *cloneSource;
	FNA3D_Effect **effect;
	MOJOSHADER_effect **effectData;
} WRAP__struct_FNA3D_CloneEffect;
void WRAP__MAIN__FNA3D_CloneEffect(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_CloneEffect *wrap_struct = (WRAP__struct_FNA3D_CloneEffect*)wrap_struct_ptr;
	FNA3D_CloneEffect(
		wrap_struct->device,
		wrap_struct->cloneSource,
		wrap_struct->effect,
		wrap_struct->effectData
	);
}
void WRAP_FNA3D_CloneEffect(FNA3D_Device *device,FNA3D_Effect *cloneSource,FNA3D_Effect **effect,MOJOSHADER_effect **effectData)
{
	// $func: `void FNA3D_CloneEffect(FNA3D_Device *device,FNA3D_Effect *cloneSource,FNA3D_Effect **effect,MOJOSHADER_effect **effectData)`
	// $ret: `void`
	// $name: `FNA3D_CloneEffect`
	// $args: `FNA3D_Device *device,FNA3D_Effect *cloneSource,FNA3D_Effect **effect,MOJOSHADER_effect **effectData`
	// $argsargs: `device,cloneSource,effect,effectData`
	// $argc: `4`
	//
	// return FNA3D_CloneEffect(device,cloneSource,effect,effectData);
	WRAP__struct_FNA3D_CloneEffect wrap_struct = {
		.device = device,
		.cloneSource = cloneSource,
		.effect = effect,
		.effectData = effectData,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_CloneEffect, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_CloneEffect')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Effect *effect;
} WRAP__struct_FNA3D_AddDisposeEffect;
void WRAP__MAIN__FNA3D_AddDisposeEffect(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_AddDisposeEffect *wrap_struct = (WRAP__struct_FNA3D_AddDisposeEffect*)wrap_struct_ptr;
	FNA3D_AddDisposeEffect(
		wrap_struct->device,
		wrap_struct->effect
	);
}
void WRAP_FNA3D_AddDisposeEffect(FNA3D_Device *device,FNA3D_Effect *effect)
{
	// $func: `void FNA3D_AddDisposeEffect(FNA3D_Device *device,FNA3D_Effect *effect)`
	// $ret: `void`
	// $name: `FNA3D_AddDisposeEffect`
	// $args: `FNA3D_Device *device,FNA3D_Effect *effect`
	// $argsargs: `device,effect`
	// $argc: `2`
	//
	// return FNA3D_AddDisposeEffect(device,effect);
	WRAP__struct_FNA3D_AddDisposeEffect wrap_struct = {
		.device = device,
		.effect = effect,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_AddDisposeEffect, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_AddDisposeEffect')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Effect *effect;
	MOJOSHADER_effectTechnique *technique;
} WRAP__struct_FNA3D_SetEffectTechnique;
void WRAP__MAIN__FNA3D_SetEffectTechnique(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_SetEffectTechnique *wrap_struct = (WRAP__struct_FNA3D_SetEffectTechnique*)wrap_struct_ptr;
	FNA3D_SetEffectTechnique(
		wrap_struct->device,
		wrap_struct->effect,
		wrap_struct->technique
	);
}
void WRAP_FNA3D_SetEffectTechnique(FNA3D_Device *device,FNA3D_Effect *effect,MOJOSHADER_effectTechnique *technique)
{
	// $func: `void FNA3D_SetEffectTechnique(FNA3D_Device *device,FNA3D_Effect *effect,MOJOSHADER_effectTechnique *technique)`
	// $ret: `void`
	// $name: `FNA3D_SetEffectTechnique`
	// $args: `FNA3D_Device *device,FNA3D_Effect *effect,MOJOSHADER_effectTechnique *technique`
	// $argsargs: `device,effect,technique`
	// $argc: `3`
	//
	// return FNA3D_SetEffectTechnique(device,effect,technique);
	WRAP__struct_FNA3D_SetEffectTechnique wrap_struct = {
		.device = device,
		.effect = effect,
		.technique = technique,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_SetEffectTechnique, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_SetEffectTechnique')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Effect *effect;
	uint32_t pass;
	MOJOSHADER_effectStateChanges *stateChanges;
} WRAP__struct_FNA3D_ApplyEffect;
void WRAP__MAIN__FNA3D_ApplyEffect(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_ApplyEffect *wrap_struct = (WRAP__struct_FNA3D_ApplyEffect*)wrap_struct_ptr;
	FNA3D_ApplyEffect(
		wrap_struct->device,
		wrap_struct->effect,
		wrap_struct->pass,
		wrap_struct->stateChanges
	);
}
void WRAP_FNA3D_ApplyEffect(FNA3D_Device *device,FNA3D_Effect *effect,uint32_t pass,MOJOSHADER_effectStateChanges *stateChanges)
{
	// $func: `void FNA3D_ApplyEffect(FNA3D_Device *device,FNA3D_Effect *effect,uint32_t pass,MOJOSHADER_effectStateChanges *stateChanges)`
	// $ret: `void`
	// $name: `FNA3D_ApplyEffect`
	// $args: `FNA3D_Device *device,FNA3D_Effect *effect,uint32_t pass,MOJOSHADER_effectStateChanges *stateChanges`
	// $argsargs: `device,effect,pass,stateChanges`
	// $argc: `4`
	//
	// return FNA3D_ApplyEffect(device,effect,pass,stateChanges);
	WRAP__struct_FNA3D_ApplyEffect wrap_struct = {
		.device = device,
		.effect = effect,
		.pass = pass,
		.stateChanges = stateChanges,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_ApplyEffect, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_ApplyEffect')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Effect *effect;
	MOJOSHADER_effectStateChanges *stateChanges;
} WRAP__struct_FNA3D_BeginPassRestore;
void WRAP__MAIN__FNA3D_BeginPassRestore(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_BeginPassRestore *wrap_struct = (WRAP__struct_FNA3D_BeginPassRestore*)wrap_struct_ptr;
	FNA3D_BeginPassRestore(
		wrap_struct->device,
		wrap_struct->effect,
		wrap_struct->stateChanges
	);
}
void WRAP_FNA3D_BeginPassRestore(FNA3D_Device *device,FNA3D_Effect *effect,MOJOSHADER_effectStateChanges *stateChanges)
{
	// $func: `void FNA3D_BeginPassRestore(FNA3D_Device *device,FNA3D_Effect *effect,MOJOSHADER_effectStateChanges *stateChanges)`
	// $ret: `void`
	// $name: `FNA3D_BeginPassRestore`
	// $args: `FNA3D_Device *device,FNA3D_Effect *effect,MOJOSHADER_effectStateChanges *stateChanges`
	// $argsargs: `device,effect,stateChanges`
	// $argc: `3`
	//
	// return FNA3D_BeginPassRestore(device,effect,stateChanges);
	WRAP__struct_FNA3D_BeginPassRestore wrap_struct = {
		.device = device,
		.effect = effect,
		.stateChanges = stateChanges,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_BeginPassRestore, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_BeginPassRestore')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Effect *effect;
} WRAP__struct_FNA3D_EndPassRestore;
void WRAP__MAIN__FNA3D_EndPassRestore(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_EndPassRestore *wrap_struct = (WRAP__struct_FNA3D_EndPassRestore*)wrap_struct_ptr;
	FNA3D_EndPassRestore(
		wrap_struct->device,
		wrap_struct->effect
	);
}
void WRAP_FNA3D_EndPassRestore(FNA3D_Device *device,FNA3D_Effect *effect)
{
	// $func: `void FNA3D_EndPassRestore(FNA3D_Device *device,FNA3D_Effect *effect)`
	// $ret: `void`
	// $name: `FNA3D_EndPassRestore`
	// $args: `FNA3D_Device *device,FNA3D_Effect *effect`
	// $argsargs: `device,effect`
	// $argc: `2`
	//
	// return FNA3D_EndPassRestore(device,effect);
	WRAP__struct_FNA3D_EndPassRestore wrap_struct = {
		.device = device,
		.effect = effect,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_EndPassRestore, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_EndPassRestore')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Query* *WRAP_RET;
} WRAP__struct_FNA3D_CreateQuery;
void WRAP__MAIN__FNA3D_CreateQuery(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_CreateQuery *wrap_struct = (WRAP__struct_FNA3D_CreateQuery*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_CreateQuery(
		wrap_struct->device
	);
}
FNA3D_Query* WRAP_FNA3D_CreateQuery(FNA3D_Device *device)
{
	// $func: `FNA3D_Query* FNA3D_CreateQuery(FNA3D_Device *device)`
	// $ret: `FNA3D_Query*`
	// $name: `FNA3D_CreateQuery`
	// $args: `FNA3D_Device *device`
	// $argsargs: `device`
	// $argc: `1`
	//
	// return FNA3D_CreateQuery(device);
	FNA3D_Query* wrap_ret;
	WRAP__struct_FNA3D_CreateQuery wrap_struct = {
		.device = device,
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_CreateQuery, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_CreateQuery')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Query *query;
} WRAP__struct_FNA3D_AddDisposeQuery;
void WRAP__MAIN__FNA3D_AddDisposeQuery(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_AddDisposeQuery *wrap_struct = (WRAP__struct_FNA3D_AddDisposeQuery*)wrap_struct_ptr;
	FNA3D_AddDisposeQuery(
		wrap_struct->device,
		wrap_struct->query
	);
}
void WRAP_FNA3D_AddDisposeQuery(FNA3D_Device *device, FNA3D_Query *query)
{
	// $func: `void FNA3D_AddDisposeQuery(FNA3D_Device *device, FNA3D_Query *query)`
	// $ret: `void`
	// $name: `FNA3D_AddDisposeQuery`
	// $args: `FNA3D_Device *device, FNA3D_Query *query`
	// $argsargs: `device,query`
	// $argc: `2`
	//
	// return FNA3D_AddDisposeQuery(device,query);
	WRAP__struct_FNA3D_AddDisposeQuery wrap_struct = {
		.device = device,
		.query = query,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_AddDisposeQuery, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_AddDisposeQuery')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Query *query;
} WRAP__struct_FNA3D_QueryBegin;
void WRAP__MAIN__FNA3D_QueryBegin(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_QueryBegin *wrap_struct = (WRAP__struct_FNA3D_QueryBegin*)wrap_struct_ptr;
	FNA3D_QueryBegin(
		wrap_struct->device,
		wrap_struct->query
	);
}
void WRAP_FNA3D_QueryBegin(FNA3D_Device *device, FNA3D_Query *query)
{
	// $func: `void FNA3D_QueryBegin(FNA3D_Device *device, FNA3D_Query *query)`
	// $ret: `void`
	// $name: `FNA3D_QueryBegin`
	// $args: `FNA3D_Device *device, FNA3D_Query *query`
	// $argsargs: `device,query`
	// $argc: `2`
	//
	// return FNA3D_QueryBegin(device,query);
	WRAP__struct_FNA3D_QueryBegin wrap_struct = {
		.device = device,
		.query = query,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_QueryBegin, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_QueryBegin')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Query *query;
} WRAP__struct_FNA3D_QueryEnd;
void WRAP__MAIN__FNA3D_QueryEnd(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_QueryEnd *wrap_struct = (WRAP__struct_FNA3D_QueryEnd*)wrap_struct_ptr;
	FNA3D_QueryEnd(
		wrap_struct->device,
		wrap_struct->query
	);
}
void WRAP_FNA3D_QueryEnd(FNA3D_Device *device, FNA3D_Query *query)
{
	// $func: `void FNA3D_QueryEnd(FNA3D_Device *device, FNA3D_Query *query)`
	// $ret: `void`
	// $name: `FNA3D_QueryEnd`
	// $args: `FNA3D_Device *device, FNA3D_Query *query`
	// $argsargs: `device,query`
	// $argc: `2`
	//
	// return FNA3D_QueryEnd(device,query);
	WRAP__struct_FNA3D_QueryEnd wrap_struct = {
		.device = device,
		.query = query,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_QueryEnd, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_QueryEnd')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Query *query;
	uint8_t *WRAP_RET;
} WRAP__struct_FNA3D_QueryComplete;
void WRAP__MAIN__FNA3D_QueryComplete(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_QueryComplete *wrap_struct = (WRAP__struct_FNA3D_QueryComplete*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_QueryComplete(
		wrap_struct->device,
		wrap_struct->query
	);
}
uint8_t WRAP_FNA3D_QueryComplete(FNA3D_Device *device, FNA3D_Query *query)
{
	// $func: `uint8_t FNA3D_QueryComplete(FNA3D_Device *device, FNA3D_Query *query)`
	// $ret: `uint8_t`
	// $name: `FNA3D_QueryComplete`
	// $args: `FNA3D_Device *device, FNA3D_Query *query`
	// $argsargs: `device,query`
	// $argc: `2`
	//
	// return FNA3D_QueryComplete(device,query);
	uint8_t wrap_ret;
	WRAP__struct_FNA3D_QueryComplete wrap_struct = {
		.device = device,
		.query = query,
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_QueryComplete, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_QueryComplete')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Query *query;
	int32_t *WRAP_RET;
} WRAP__struct_FNA3D_QueryPixelCount;
void WRAP__MAIN__FNA3D_QueryPixelCount(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_QueryPixelCount *wrap_struct = (WRAP__struct_FNA3D_QueryPixelCount*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_QueryPixelCount(
		wrap_struct->device,
		wrap_struct->query
	);
}
int32_t WRAP_FNA3D_QueryPixelCount(FNA3D_Device *device,FNA3D_Query *query)
{
	// $func: `int32_t FNA3D_QueryPixelCount(FNA3D_Device *device,FNA3D_Query *query)`
	// $ret: `int32_t`
	// $name: `FNA3D_QueryPixelCount`
	// $args: `FNA3D_Device *device,FNA3D_Query *query`
	// $argsargs: `device,query`
	// $argc: `2`
	//
	// return FNA3D_QueryPixelCount(device,query);
	int32_t wrap_ret;
	WRAP__struct_FNA3D_QueryPixelCount wrap_struct = {
		.device = device,
		.query = query,
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_QueryPixelCount, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_QueryPixelCount')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	FNA3D_Device *device;
	uint8_t *WRAP_RET;
} WRAP__struct_FNA3D_SupportsDXT1;
void WRAP__MAIN__FNA3D_SupportsDXT1(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_SupportsDXT1 *wrap_struct = (WRAP__struct_FNA3D_SupportsDXT1*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_SupportsDXT1(
		wrap_struct->device
	);
}
uint8_t WRAP_FNA3D_SupportsDXT1(FNA3D_Device *device)
{
	// $func: `uint8_t FNA3D_SupportsDXT1(FNA3D_Device *device)`
	// $ret: `uint8_t`
	// $name: `FNA3D_SupportsDXT1`
	// $args: `FNA3D_Device *device`
	// $argsargs: `device`
	// $argc: `1`
	//
	// return FNA3D_SupportsDXT1(device);
	uint8_t wrap_ret;
	WRAP__struct_FNA3D_SupportsDXT1 wrap_struct = {
		.device = device,
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_SupportsDXT1, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_SupportsDXT1')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	FNA3D_Device *device;
	uint8_t *WRAP_RET;
} WRAP__struct_FNA3D_SupportsS3TC;
void WRAP__MAIN__FNA3D_SupportsS3TC(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_SupportsS3TC *wrap_struct = (WRAP__struct_FNA3D_SupportsS3TC*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_SupportsS3TC(
		wrap_struct->device
	);
}
uint8_t WRAP_FNA3D_SupportsS3TC(FNA3D_Device *device)
{
	// $func: `uint8_t FNA3D_SupportsS3TC(FNA3D_Device *device)`
	// $ret: `uint8_t`
	// $name: `FNA3D_SupportsS3TC`
	// $args: `FNA3D_Device *device`
	// $argsargs: `device`
	// $argc: `1`
	//
	// return FNA3D_SupportsS3TC(device);
	uint8_t wrap_ret;
	WRAP__struct_FNA3D_SupportsS3TC wrap_struct = {
		.device = device,
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_SupportsS3TC, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_SupportsS3TC')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	FNA3D_Device *device;
	uint8_t *WRAP_RET;
} WRAP__struct_FNA3D_SupportsBC7;
void WRAP__MAIN__FNA3D_SupportsBC7(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_SupportsBC7 *wrap_struct = (WRAP__struct_FNA3D_SupportsBC7*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_SupportsBC7(
		wrap_struct->device
	);
}
uint8_t WRAP_FNA3D_SupportsBC7(FNA3D_Device *device)
{
	// $func: `uint8_t FNA3D_SupportsBC7(FNA3D_Device *device)`
	// $ret: `uint8_t`
	// $name: `FNA3D_SupportsBC7`
	// $args: `FNA3D_Device *device`
	// $argsargs: `device`
	// $argc: `1`
	//
	// return FNA3D_SupportsBC7(device);
	uint8_t wrap_ret;
	WRAP__struct_FNA3D_SupportsBC7 wrap_struct = {
		.device = device,
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_SupportsBC7, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_SupportsBC7')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	FNA3D_Device *device;
	uint8_t *WRAP_RET;
} WRAP__struct_FNA3D_SupportsHardwareInstancing;
void WRAP__MAIN__FNA3D_SupportsHardwareInstancing(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_SupportsHardwareInstancing *wrap_struct = (WRAP__struct_FNA3D_SupportsHardwareInstancing*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_SupportsHardwareInstancing(
		wrap_struct->device
	);
}
uint8_t WRAP_FNA3D_SupportsHardwareInstancing(FNA3D_Device *device)
{
	// $func: `uint8_t FNA3D_SupportsHardwareInstancing(FNA3D_Device *device)`
	// $ret: `uint8_t`
	// $name: `FNA3D_SupportsHardwareInstancing`
	// $args: `FNA3D_Device *device`
	// $argsargs: `device`
	// $argc: `1`
	//
	// return FNA3D_SupportsHardwareInstancing(device);
	uint8_t wrap_ret;
	WRAP__struct_FNA3D_SupportsHardwareInstancing wrap_struct = {
		.device = device,
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_SupportsHardwareInstancing, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_SupportsHardwareInstancing')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	FNA3D_Device *device;
	uint8_t *WRAP_RET;
} WRAP__struct_FNA3D_SupportsNoOverwrite;
void WRAP__MAIN__FNA3D_SupportsNoOverwrite(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_SupportsNoOverwrite *wrap_struct = (WRAP__struct_FNA3D_SupportsNoOverwrite*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_SupportsNoOverwrite(
		wrap_struct->device
	);
}
uint8_t WRAP_FNA3D_SupportsNoOverwrite(FNA3D_Device *device)
{
	// $func: `uint8_t FNA3D_SupportsNoOverwrite(FNA3D_Device *device)`
	// $ret: `uint8_t`
	// $name: `FNA3D_SupportsNoOverwrite`
	// $args: `FNA3D_Device *device`
	// $argsargs: `device`
	// $argc: `1`
	//
	// return FNA3D_SupportsNoOverwrite(device);
	uint8_t wrap_ret;
	WRAP__struct_FNA3D_SupportsNoOverwrite wrap_struct = {
		.device = device,
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_SupportsNoOverwrite, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_SupportsNoOverwrite')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	FNA3D_Device *device;
	uint8_t *WRAP_RET;
} WRAP__struct_FNA3D_SupportsSRGBRenderTargets;
void WRAP__MAIN__FNA3D_SupportsSRGBRenderTargets(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_SupportsSRGBRenderTargets *wrap_struct = (WRAP__struct_FNA3D_SupportsSRGBRenderTargets*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_SupportsSRGBRenderTargets(
		wrap_struct->device
	);
}
uint8_t WRAP_FNA3D_SupportsSRGBRenderTargets(FNA3D_Device *device)
{
	// $func: `uint8_t FNA3D_SupportsSRGBRenderTargets(FNA3D_Device *device)`
	// $ret: `uint8_t`
	// $name: `FNA3D_SupportsSRGBRenderTargets`
	// $args: `FNA3D_Device *device`
	// $argsargs: `device`
	// $argc: `1`
	//
	// return FNA3D_SupportsSRGBRenderTargets(device);
	uint8_t wrap_ret;
	WRAP__struct_FNA3D_SupportsSRGBRenderTargets wrap_struct = {
		.device = device,
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_SupportsSRGBRenderTargets, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_SupportsSRGBRenderTargets')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	FNA3D_Device *device;
	int32_t *textures;
	int32_t *vertexTextures;
} WRAP__struct_FNA3D_GetMaxTextureSlots;
void WRAP__MAIN__FNA3D_GetMaxTextureSlots(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_GetMaxTextureSlots *wrap_struct = (WRAP__struct_FNA3D_GetMaxTextureSlots*)wrap_struct_ptr;
	FNA3D_GetMaxTextureSlots(
		wrap_struct->device,
		wrap_struct->textures,
		wrap_struct->vertexTextures
	);
}
void WRAP_FNA3D_GetMaxTextureSlots(FNA3D_Device *device,int32_t *textures,int32_t *vertexTextures)
{
	// $func: `void FNA3D_GetMaxTextureSlots(FNA3D_Device *device,int32_t *textures,int32_t *vertexTextures)`
	// $ret: `void`
	// $name: `FNA3D_GetMaxTextureSlots`
	// $args: `FNA3D_Device *device,int32_t *textures,int32_t *vertexTextures`
	// $argsargs: `device,textures,vertexTextures`
	// $argc: `3`
	//
	// return FNA3D_GetMaxTextureSlots(device,textures,vertexTextures);
	WRAP__struct_FNA3D_GetMaxTextureSlots wrap_struct = {
		.device = device,
		.textures = textures,
		.vertexTextures = vertexTextures,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_GetMaxTextureSlots, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_GetMaxTextureSlots')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_SurfaceFormat format;
	int32_t multiSampleCount;
	int32_t *WRAP_RET;
} WRAP__struct_FNA3D_GetMaxMultiSampleCount;
void WRAP__MAIN__FNA3D_GetMaxMultiSampleCount(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_GetMaxMultiSampleCount *wrap_struct = (WRAP__struct_FNA3D_GetMaxMultiSampleCount*)wrap_struct_ptr;
	*(wrap_struct->WRAP_RET) = FNA3D_GetMaxMultiSampleCount(
		wrap_struct->device,
		wrap_struct->format,
		wrap_struct->multiSampleCount
	);
}
int32_t WRAP_FNA3D_GetMaxMultiSampleCount(FNA3D_Device *device,FNA3D_SurfaceFormat format,int32_t multiSampleCount)
{
	// $func: `int32_t FNA3D_GetMaxMultiSampleCount(FNA3D_Device *device,FNA3D_SurfaceFormat format,int32_t multiSampleCount)`
	// $ret: `int32_t`
	// $name: `FNA3D_GetMaxMultiSampleCount`
	// $args: `FNA3D_Device *device,FNA3D_SurfaceFormat format,int32_t multiSampleCount`
	// $argsargs: `device,format,multiSampleCount`
	// $argc: `3`
	//
	// return FNA3D_GetMaxMultiSampleCount(device,format,multiSampleCount);
	int32_t wrap_ret;
	WRAP__struct_FNA3D_GetMaxMultiSampleCount wrap_struct = {
		.device = device,
		.format = format,
		.multiSampleCount = multiSampleCount,
		.WRAP_RET = &wrap_ret
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_GetMaxMultiSampleCount, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_GetMaxMultiSampleCount')");
		assert(0);
	}
	return wrap_ret;
}

typedef struct {
	FNA3D_Device *device;
	const char *text;
} WRAP__struct_FNA3D_SetStringMarker;
void WRAP__MAIN__FNA3D_SetStringMarker(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_SetStringMarker *wrap_struct = (WRAP__struct_FNA3D_SetStringMarker*)wrap_struct_ptr;
	FNA3D_SetStringMarker(
		wrap_struct->device,
		wrap_struct->text
	);
}
void WRAP_FNA3D_SetStringMarker(FNA3D_Device *device, const char *text)
{
	// $func: `void FNA3D_SetStringMarker(FNA3D_Device *device, const char *text)`
	// $ret: `void`
	// $name: `FNA3D_SetStringMarker`
	// $args: `FNA3D_Device *device, const char *text`
	// $argsargs: `device,text`
	// $argc: `2`
	//
	// return FNA3D_SetStringMarker(device,text);
	WRAP__struct_FNA3D_SetStringMarker wrap_struct = {
		.device = device,
		.text = text,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_SetStringMarker, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_SetStringMarker')");
		assert(0);
	}
}

typedef struct {
	FNA3D_Device *device;
	FNA3D_Texture *texture;
	const char *text;
} WRAP__struct_FNA3D_SetTextureName;
void WRAP__MAIN__FNA3D_SetTextureName(void *wrap_struct_ptr) {
	WRAP__struct_FNA3D_SetTextureName *wrap_struct = (WRAP__struct_FNA3D_SetTextureName*)wrap_struct_ptr;
	FNA3D_SetTextureName(
		wrap_struct->device,
		wrap_struct->texture,
		wrap_struct->text
	);
}
void WRAP_FNA3D_SetTextureName(FNA3D_Device *device, FNA3D_Texture *texture, const char *text)
{
	// $func: `void FNA3D_SetTextureName(FNA3D_Device *device, FNA3D_Texture *texture, const char *text)`
	// $ret: `void`
	// $name: `FNA3D_SetTextureName`
	// $args: `FNA3D_Device *device, FNA3D_Texture *texture, const char *text`
	// $argsargs: `device,texture,text`
	// $argc: `3`
	//
	// return FNA3D_SetTextureName(device,texture,text);
	WRAP__struct_FNA3D_SetTextureName wrap_struct = {
		.device = device,
		.texture = texture,
		.text = text,
	};
	if (!emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(), WRAP__MAIN__FNA3D_SetTextureName, (void*)&wrap_struct)) {
		emscripten_run_script("console.error('wrap.fish: failed to proxy FNA3D_SetTextureName')");
		assert(0);
	}
}

