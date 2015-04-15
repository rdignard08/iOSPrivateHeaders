
@interface _NSRefcountedPthreadMutex : NSObject {

    {_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]} lock;
}

 - (void) dealloc;
 - (void) finalize;
 - (void) lock;
 - (void) unlock;
 - (id) init;


@end
