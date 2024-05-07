# Token-based Authentication

This  method of authentication is where users are issued tokens after successfully authenticating with the system. These tokens are then used to authenticate subsequent requests.


- **Range:** Token-based authentication can be implemented in any web application, mobile application, or system where users need to be authenticated.
- **Validity:** This method is widely used and provides a scalable solution for authentication. Tokens can be easily managed and revoked if needed.
- **Safety:** Token-based authentication provides a secure method of authentication, as tokens can be encrypted and have expiration times. However, it's important to implement proper security measures to protect against token theft and unauthorized access.


Here, the server generates a token for the user after successful authentication(after entering right credentials e.g.,username,password). This token is typically a random string of characters and is sent to the client. The client includes this token in the headers of subsequent requests to the server.


## How it Works
1. **Authentication:** The user provides their credentials (username and password) to the server.

=>

2. **Token Generation:** If the credentials are valid, the server generates a token for the user.

=>

3. **Token Issuance:** The server sends the token to the client.

=>

4. **Subsequent Requests:** The client includes the token in the headers of subsequent requests to the server.

=>

5. **Token Validation:** The server validates the token and authorizes the request if the token is valid.



Here, user data including usernames, passwords, and tokens may be stored in a database. The tokens are associated with user accounts and are used to identify and authenticate users.


In old times user's data may have been stored in flat files or relational databases. Tokens were typically stored in the user table or a separate table associated with user accounts.
But now a days user's data is often stored in secure databases, with passwords hashed and tokens encrypted for enhanced security. Token expiration times may also be implemented to limit the lifetime of tokens and reduce the risk of unauthorized access if somebody got to know the token.

Tokens arent just array of character, there can be two types of tokens 
1. Physical 
2. Web 

we'll learn about them as we go frwd 


