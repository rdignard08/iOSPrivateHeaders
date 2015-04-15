
@protocol _UIViewServiceDeputyXPCInterface;
@interface _UIViewServiceViewControllerDeputyXPCInterface : NSObject <_UIViewServiceDeputyXPCInterface> {

    NSXPCInterface _exportedInterface;
    NSXPCInterface _remoteViewControllerInterface;
}
 + (id) interfaceWithExportedInterface:(id)aremoteViewControllerInterface:(id)b;

 - (id) exportedInterface;
 - (void) dealloc;
 - (id) connectionProtocol;
 - (id) hostObjectInterface;
 - (SEL) connectionSelector;
 - (id) connectionInvocation;


@end
