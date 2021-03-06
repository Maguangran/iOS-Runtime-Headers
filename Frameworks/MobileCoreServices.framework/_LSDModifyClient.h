/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSDModifyClient : _LSDClient <_LSDModifyProtocol>

- (void)didHandleInvocation:(id)arg1 isReply:(BOOL)arg2;
- (void)rebuildApplicationDatabasesForSystem:(BOOL)arg1 internal:(BOOL)arg2 user:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (void)registerExtensionPoint:(id)arg1 withInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)registerItemInfo:(id)arg1 alias:(id)arg2 diskImageAlias:(id)arg3 bundleURL:(id)arg4 installationPlist:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)removeHandlerForContentType:(id)arg1 roles:(unsigned long)arg2 completionHandler:(id /* block */)arg3;
- (void)removeHandlerForURLScheme:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resetServerStoreWithCompletionHandler:(id /* block */)arg1;
- (void)setDatabaseIsSeeded:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)setHandler:(id)arg1 version:(unsigned long long)arg2 forURLScheme:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setHandler:(id)arg1 version:(unsigned long long)arg2 roles:(unsigned long)arg3 forContentType:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)setHandlerOptions:(unsigned long)arg1 forContentType:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)synchronizeWithMobileInstallation;
- (void)updateApplication:(id)arg1 mobileInstallationChanges:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateContainerUnit:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (void)willHandleInvocation:(id)arg1 isReply:(BOOL)arg2;

@end
