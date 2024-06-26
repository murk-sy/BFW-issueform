#include <option/mdns.h>
#define PBUF_POOL_SMALL_BUFSIZE LWIP_MEM_ALIGN_SIZE(40 + PBUF_LINK_ENCAPSULATION_HLEN + PBUF_LINK_HLEN)
LWIP_MEMPOOL(PBUF_POOL_SMALL, PBUF_POOL_SMALL_SIZE, (LWIP_MEM_ALIGN_SIZE(sizeof(struct pbuf_custom)) + LWIP_MEM_ALIGN_SIZE(PBUF_POOL_SMALL_BUFSIZE)), "PBUF_POOL_SMALL")

LWIP_MALLOC_MEMPOOL_START
#if MDNS()
LWIP_MALLOC_MEMPOOL(7, 128)
#else
LWIP_MALLOC_MEMPOOL(6, 128)
#endif
LWIP_MALLOC_MEMPOOL(2, 512)
LWIP_MALLOC_MEMPOOL(1, 1512)
LWIP_MALLOC_MEMPOOL_END
