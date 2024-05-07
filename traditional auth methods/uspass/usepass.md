# Username-Password Authentication

This authentication is the most widely used method for user authentication on the web/apps. It involves users providing a combination of a username and a secret password to gain access to a system.

# Details:
- **Range:**  Username/Password authentication can be implemented in any web application, mobile appliations, databases or system where users need to be authenticated.

- **Validity:** This method is widely used and has been in use for many years. It remains a valid and most easily usable(for user) and easy to create(for developers) option for authenticating users , but it was headache in old times how to maintain the user auth data if data is too huge but now there are many solutions to that, like cloud storage and many more .

- **Safety:** While this authentication method is simple to implement,but it has several security vulnerabilities. These include password guessing, brute-force attacks, and phishing attacks. Users often choose weak passwords, reuse passwords across multiple sites, or fall victim to social engineering attacks.
   As a result, additional security measures such as multi-factor authentication (MFA) are recommended to enhance the security of this method.



In the old days, managing user credentials (usernames and passwords) was typically done using simple data storage methods, often involving databases or flat files. Here's how it was typically managed:

- **Flat Files:** One of the simplest methods was to store user credentials in flat text files. Each line of the file could represent a user, with the username and password separated by a delimiter like a comma or a tab. For example:

```
username1,password1
username2,password2
```

- **Databases:** More commonly, user credentials were stored in relational databases. A table would be created to store user information, with columns for the username and password. The passwords would often be hashed for security reasons to protect them from being easily readable if the database was compromised(hacked,).

- **Hashing**: To enhance security, passwords were typically hashed before being stored. Hashing is a process that converts an input (in this case, the password) into a fixed-size string of characters, which is typically a cryptographic hash function. This makes it difficult for attackers to retrieve the original password from the hashed value, even if they gain access to the stored hashes.
Salting: To further enhance security, a random value known as a "salt" could be added to the password before hashing it. This prevents attackers from using precomputed tables (rainbow tables) to quickly crack hashed passwords.

- **Encryption**: In some cases, passwords were encrypted before being stored in the database. Encryption is reversible, meaning that it's possible to decrypt the passwords if you have the encryption key. However, this introduces an additional layer of complexity and potential vulnerabilities.