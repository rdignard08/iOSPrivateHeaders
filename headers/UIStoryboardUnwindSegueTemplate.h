
@interface UIStoryboardUnwindSegueTemplate : UIStoryboardSegueTemplate {

    @"NSString" _action;
}

 - (void) dealloc;
 - (id) action;
 - (void) setAction:(id)a;
 - (void) _perform:(id)a;
 - (id) _unwindTargetForSelector:(SEL)awithSender:(id)b;
 - (id) _unwindExecutorForTarget:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
