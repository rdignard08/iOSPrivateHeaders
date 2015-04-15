
@protocol _UIViewServiceDeputyXPCInterface;
@interface _UIViewControllerControlMessageDeputyXPCInterface : NSObject <_UIViewServiceDeputyXPCInterface> {

}

 - (id) exportedInterface;
 - (id) connectionProtocol;
 - (id) hostObjectInterface;
 - (SEL) connectionSelector;
 - (id) connectionInvocation;


@end
