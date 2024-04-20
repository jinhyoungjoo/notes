# DNS (Domain Name System)

- OSI Layer 7 (Application Layer), Port 53 (UDP)
- DNS tranlates hostnames to IP addresses by querying a distributed database system of DNS servers.

## DNS Features
- Host Aliasing
- Mail Server Aliasing
- Load Distribution

## DNS Request Steps
1. End Host
2. Local DNS Server
3. Root DNS Server
4. TLD (Top Level Domain) DNS Server: ex) .org, .com
5. Authoritative DNS Server

## Security Issues Related To DNS
- DDoS (Distributed Denial of Service) Attacks
- MITM (Man-In-The-Middle) Attacks

## Terminal Commands
- nslookup: Query the DNS server for the IP address.
```bash
nslookup google.com
```
