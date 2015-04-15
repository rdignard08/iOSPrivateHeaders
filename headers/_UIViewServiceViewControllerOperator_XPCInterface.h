
@protocol _UIViewServiceDeputyXPCInterface;
@interface _UIViewServiceViewControllerOperator_XPCInterface : NSObject <_UIViewServiceDeputyXPCInterface> {

}

 - (id) exportedInterface;
 - (id) connectionProtocol;
 - (id) hostObjectInterface;
 - (SEL) connectionSelector;
 - (id) connectionInvocation;


@end
